# 4pi.org

wml powered personal website at http://4pi.org

Generating:

    wmk -af

Publishing:

    rsync -av --stats --delete  --exclude=*.wml --exclude=.git* /home/peter/public_html/4pi.org/ vserver:/var/www/4pi.org


