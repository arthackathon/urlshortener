from django.shortcuts import render
from django.http import HttpResponse

from django.shortcuts import redirect

def index(request):
    return render(request, "index.html")

def redirect_to_google(request):
    return redirect('https://google.com')
