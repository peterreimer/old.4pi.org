# 4pi.org

wml powered personal website at http://4pi.org

Generating:

    wmk -af

Publishing:

    rsync -av --stats --delete  --exclude=*.wml --exclude=.git* /home/peter/public_html/4pi.org/ root@80.86.93.43:/var/www/4pi.org


