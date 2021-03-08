# 4pi.org

[wml](https://www.shlomifish.org/open-source/projects/website-meta-language/) powered personal website at http://4pi.org

Generating:

```shell
$ wmk -af
```

Publishing:

```shell
$ rsync -av --stats --delete  --exclude=*.wml --exclude=.git* /home/peter/public_html/4pi.org/ root@80.86.93.43:/var/www/4pi.org
```


