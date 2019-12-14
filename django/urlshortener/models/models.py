from django.db import models

URL_MAX_LENGTH = 100
SHORTENED_CODE_LENGTH = 8

class Shortener(models.Model):
    url = models.CharField(max_length=URL_MAX_LENGTH)
    shortened_code = models.CharField(max_length=SHORTENETED_CODE_LENGTH)
