import requests

url = requests.get("https://api.ipify.org/?format=json")

# print(url.json())

# print(url.json()['ip'])


# https://ipinfo.io/<YOUR_IP>/geo

location = requests.get("https://ipinfo.io/"+url.json()['ip']+"/geo")

# print(location.json())

print(location.json()['city'])
print(location.json()['region'])
print(location.json()['country'])
print(location.json()['loc'])   

