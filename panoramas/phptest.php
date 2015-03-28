<html>
<head>
	<title>Test mit php</title>
	<style type="text/css">
	td,th {font-family: verdana; font-size: 14px}
	.head {background-color: #dddddd}
	.odd  {background-color: #eeeeee}
	.even {background-color: #ffffff}
	</style>
</head>
<body>
<?php
$link=mysql_connect("localhost","guest","");
mysql_select_db("panoramas");
$query  = "SELECT * FROM interpolator;";
$result = mysql_query($query);

echo "<table>\n";
while ($row = mysql_fetch_row($result)){
	echo "<tr>\n";
	for ($j = 0; $j < mysql_num_fields($result);$j++){
		echo "<td>$row[$j] </td>";
	}
	echo "</tr>\n";
}
echo "</table>\n";
?>
<hr>

<?php

function oddeven($i){
	if($i%2 == 0) {
	return "class=\"even\" ";
	} else {
	return "class=\"odd\" ";
	}
	
}
$link=mysql_connect("localhost","guest","");
mysql_select_db("panoramas");
$query  = "SELECT * FROM interpolator;";
$result = mysql_query($query);

echo "<table>\n";
echo "<th class=\"head\" width=20>option</th>";
echo "<th class=\"head\">description</th>";
$j=0;
while ($row = mysql_fetch_row($result)){
	echo "<tr>\n";
	echo "  <td ";
	echo oddeven($j);	
	echo ">$row[0]</td>\n";
	echo "  <td ";
	echo oddeven($j);	
	echo ">$row[1]</td>\n";
	echo "</tr>\n";
	$j++;
}
echo "</table>\n";
?>


</body>
</html>