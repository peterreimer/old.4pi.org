#  template für framesets
#use wml::std::info
#use wml::std::grid
#use wml::std::lang
#use wml::std::href
#use wml::fmt::isolatin
#use wml::des::navbar

<lang:new id=en short>
<lang:new id=de short>
#<lang:star:slice: %BASE.*.html>




<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>

<head>
  <link REL="stylesheet" TYPE="text/css" HREF="$(CSS)/style.css">
</head>

<body class="frameset">
{#BODY#}
</body>
</html>

{#BODY#:


#   way to insert the subject
<define-tag subject>
{#SUBJECT#:%0:##}
</define-tag>


<define-tag section>
{#SECTION#:%0:##}
</define-tag>

<define-tag subsection>
{#SUBSECTION#:%0:##}
</define-tag>

