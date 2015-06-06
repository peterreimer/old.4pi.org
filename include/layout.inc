# the master template
#use wml::std::info
#use wml::std::grid
#use wml::std::lang
#use wml::std::href
#use wml::fmt::isolatin
#use wml::des::navbar

<lang:new id=en short>
<lang:new id=de short>
#<lang:star:slice: %BASE.*.html>


#<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//<de: DE><en: EN>">
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>

<head>
  <title>{#SECTION#} :: 4pi.org</title>
  #<title>4pi.org :: <en: Spherical Panoramas><de: Sph&auml;rische Panoramen> :: {#SECTION#}</title>
  <meta http-equiv="content-type" content="text/html; charset=ISO-8859-1">
  <link REL="stylesheet" TYPE="text/css" HREF="$(CSS)/style.css">
  <link REL="shortcut icon" HREF="$(ROOT)/favicon.ico">
  <script language="JavaScript" type="text/javascript" src="$(ROOT)/jscript/jscript.js"></script>
  <info style="meta" keywords  = "Panoramas, Oject movies, Panorama Tools, gimp, linux, immersive imaging"
                     description="<en: ><de: >" 
                     copyright = "$(WML_GEN_REALNAME)" >
</head>

<isolatin>
  
<body bgcolor="#ffffff">


#########



###
### HEADER
###

#include "header.inc"


<table cellspacing="0" cellpadding="0" width="100%" border="0">
    <tr valign="top">
      <td  width="206">

###
### NAVIGATION
###

#include "navigation.inc"

      </td>
      <td valign="top" width="100%" class="body">

###
### MAIN
###

{#BODY#}

      </td>
    </tr>
</table>


###
### FOOTER
###
<br><br>
#include "footer.inc"

</isolatin>
<!-- begin tracking-->
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-278395-1', 'auto');
  ga('send', 'pageview');

</script>
<!-- end tracking-->
</body>
</html>


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


{#BODY#:
