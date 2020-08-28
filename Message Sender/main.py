import requests
from tkinter import *


def send_message(numbers, message):
	url = "https://www.fast2sms.com/dev/bulk"
	parameters = {
		'authorization': '4wMxCEOSdugpKWLDcz0NtV72qrkhf3ZabF6XAP9iIQ5vsGmTyjioQgsxGMuqY17bmILtVWpXP8aB4vTJ',
		'sender_id': 'FSTSMS',
		'message': message,
		'language': 'english',
		'route': 'p',
		'numbers': number,
	}
	response = requests.get(url, params=parameters)
	dic = response.json()
	print(dic)


'''Page = Tk()
Page.Title("Message")
Page.geometry("400x500")
font = ('Chalkboard', 25)
'''

if __name__ == '__main__':
	file = open("numbers.txt",'r')
	numbers = file.readlines
	numList = []
	for num in numbers:
		if num[-1] == '\n':
			numList.append(num[:-1])
	send_message(numList, "This is a test message")

#Page.mainloop()