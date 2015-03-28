# the master template
#use wml::std::info
#use wml::std::box
#use wml::std::grid
#use wml::std::lang
#use wml::std::href
#use wml::sup::path
#use wml::fmt::isolatin

<lang:new id=en short>
<lang:new id=de short>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
 <head>
 <isolatin>
 <title>{#TITLE#}</title>
 <link REL="stylesheet" TYPE="text/css" HREF="$(CSS)/style.css">
 </head>

<body class="popup">

<table cellpadding=0 cellspacing=0 border=0 width=760>
<tr>
<td colspan=2>

<table cellpadding=0 cellspacing=0 border=0>
<tr>
 <td><img src="../img/topleft.gif"></td>
 <td style="background-image:url(../img/horizontal.gif); background-repeat:repeat-x;">
   <img src="../img/horizontal.gif"></td>
 <td><img src="../img/topright.gif"></td>
</tr>
<tr>
 <td style="background-image:url(../img/vertical.gif); background-repeat:repeat-y;">
   <img src="../img/vertical.gif"></td>
 <td><img src="{#BODY#}.jpg"></td>
 <td style="background-image:url(../img/vertical.gif); background-repeat:repeat-y;">
   <img src="../img/vertical.gif"></td>
</tr>
<tr>
 <td><img src="../img/bottomleft.gif"></td>
 <td style="background-image:url(../img/horizontal.gif); background-repeat:repeat-x;">
 <img src="../img/horizontal.gif"></td>
 <td><img src="../img/bottomright.gif"></td>
</tr>
</table>
</td>
</tr>
<tr>
<td>
<h1 class=popup>{#TITLE#}</h1>
</td>
<td align="right">
<small>
<a href="javascript:window.close();">
  <en: Close This Window>
  <de: Fenster schließen> [x]
</a></small>
</td></tr></table>
</isolatin>
</body>
</html>


<define-tag title>
{#TITLE#:%0:##}
</define-tag>

#   per default we are in body
{#BODY#:

