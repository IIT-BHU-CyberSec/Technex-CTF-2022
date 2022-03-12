from django.shortcuts import render
from django.http import HttpResponse
import random
# Create your views here.
flag = 'technex{Sample_flag}'

idx = 6969 + (random.randint(-69696969696, -696969) % 6969 + 6969) % 696


def idfoo(req, id):
        if req.COOKIES and req.COOKIES['ok'] == '1':
            id = int(id)
            res = HttpResponse("Try again?")
            print(idx) # for debugging purposes
            if id == idx:
                return HttpResponse('OK OK!! I gotchya, Here you go Mr.? '+ flag)
            return res
        else:
            return HttpResponse("Error!!")

def index(request):
    
    if 'id' in request.GET:
        return idfoo(request, request.GET['id'])
    res = render(request, 'index.html')
    res.set_cookie('ok', '1')
    return res