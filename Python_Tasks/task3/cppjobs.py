
""" 

this is a python script using pyautogui to take screenshots of cpp remote jobs 
the  send them to my email

"""




import webbrowser
import time 
import pyautogui 


url = "https://www.linkedin.com/jobs/search-results/?currentJobId=4398329765&keywords=c%2B%2B&origin=JOB_SEARCH_PAGE_JOB_FILTER&referralSearchId=nf5crW3lJLtGRJf7pTOuNw%3D%3D&f_TPR=r86400&f_SAL=f_SA_id_225001%3A272001%24f_SA_id_227001%3A276001"

# This searches for firefox in your system's path
try:
    browser = webbrowser.get('firefox')
    browser.open(url)
except webbrowser.Error:
    # Fallback if 'firefox' alias isn't found
    webbrowser.open(url)
    

time.sleep(5)
im1 = pyautogui.screenshot('cppjobs1.png')


pyautogui.moveTo(x=507, y=807)

for i in range(4):
    pyautogui.scroll(-11)
    im = pyautogui.screenshot(f'cppjobs{i+2}.png')
    time.sleep(1)
  








import smtplib
import os
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.image import MIMEImage

def send_email():
    # --- CONFIGURATION ---
    sender_email = "--example--@gmail.com"
    sender_password = os.environ.get('EMAIL_PASS')  # Use the 16-character App Password
    recipient_email = "eslamnasr7070@gmail.com"
    
    subject = "jobs on linkedin "
    body = "Please find the requested images attached to this email."
    images = ["cppjobs1.png","cppjobs2.png","cppjobs3.png","cppjobs4.png","cppjobs5.png"]

    # Create the root message and set headers
    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = subject

    # Attach the body text
    msg.attach(MIMEText(body, 'plain'))

    # Attach images
    for file_name in images:
        if os.path.exists(file_name):
            with open(file_name, 'rb') as f:
                img_data = f.read()
                image = MIMEImage(img_data, name=os.path.basename(file_name))
                msg.attach(image)
        else:
            print(f"Warning: {file_name} not found in the current directory.")

    try:
        # Connect to Gmail's SMTP server
        server = smtplib.SMTP('smtp.gmail.com', 587)
        server.starttls()  # Secure the connection
        server.login(sender_email, sender_password)
        
        # Send the email
        server.send_message(msg)
        server.quit()
        print("Email sent successfully!")
        
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    send_email()