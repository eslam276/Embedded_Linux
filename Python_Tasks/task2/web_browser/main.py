import firelink

facebook_link = "https://www.facebook.com/"
whatsapp_link = "https://web.whatsapp.com/"
linkedin_link = "https://www.linkedin.com/"
twitter_link = "https://twitter.com/"
instagram_link = "https://www.instagram.com/"
youtube_link = "https://www.youtube.com/"
chatgpt_link = "https://chat.openai.com/"
gemini_link = "https://www.gemini.com/"
tiktok_link = "https://www.tiktok.com/"
drive_link = "https://www.google.com/drive/"
github_link = "https://github.com/"
udemy_link = "https://www.udemy.com/"







while True :
    choice = int(input(" Enter the choice you want :\n 1. Facebook \n 2. Whatsapp \n 3. Linkedin \n 4. Twitter \n 5. Instagram \n 6. Youtube \n 7. Chatgpt \n 8. Gemini \n 9. Tiktok \n 10. Drive \n 11. Github \n 12. Udemy \n"))
    match choice :
        case 1 :
            firelink.firefox(facebook_link)
        case 2 :
            firelink.firefox(whatsapp_link)
        case 3 :
            firelink.firefox(linkedin_link)
        case 4 :
            firelink.firefox(twitter_link)
        case 5 :
            firelink.firefox(instagram_link)
        case 6 :
            firelink.firefox(youtube_link)
        case 7 :
            firelink.firefox(chatgpt_link)
        case 8 :
            firelink.firefox(gemini_link)
        case 9 :
            firelink.firefox(tiktok_link)
        case 10 :
            firelink.firefox(drive_link)
        case 11 :
            firelink.firefox(github_link)
        case 12 :
            firelink.firefox(udemy_link)
        
        case _ :
            print("Invalid choice")
            