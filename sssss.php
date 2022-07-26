<!DOCTYPE html>
<html>
<head>
	<title>PHP Controlled Arduino</title>
</head>
<body>
	<?php 
			$portWay="COM4";
			$port=fopen($portWay,"w+");

			if($port===false){
				die("PORT ERROR OR BUSY");

			}else{
				echo "PORT IS LISTENING";
			}
				sleep(2);

	 ?>
	 <form action="sssss.php" method="POST">
	 	<input type="hidden" name="turn" value="d">
	 	<input type="submit"  value="d">


	 </form>

	  <form action="sssss.php" method="POST">
	 	<input type="hidden" name="turn" value="q">
	 	<input type="submit"  value="q">
 	</form>

	 	<form action="sssss.php" method="POST">
	 	<input type="hidden" name="turn" value="w">
	 	<input type="submit"  value="w">


	 </form>

	 <form action="sssss.php" method="POST">
	 	<input type="hidden" name="turn" value="e">
	 	<input type="submit"  value="e">


	 </form>
	 <form action="sssss.php" method="POST">
	 	<input type="hidden" name="turn" value="r">
	 	<input type="submit"  value="r">


	 </form>

	 <?php 
	 	if ($_POST['turn']=="d") {
	 		fwrite($port,'d');
	 		
	 	}
	 	else if ($_POST['turn']=="q") {
	 		echo "TURN OFF";
	 		fwrite($port,'q');
	 		
	 	}
	 	else if ($_POST['turn']=="w") {
	 		echo "YELLOW IS ON";
	 		fwrite($port,'w');
	 		
	 	}
	 	else if ($_POST['turn']=="w") {
	 		echo "YELLOW IS ON";
	 		fwrite($port,'e');
	 		
	 	}
	 	else if ($_POST['turn']=="w") {
	 		echo "YELLOW IS ON";
	 		fwrite($port,'r');
	 		
	 	}
	 	fclose($port);



	  ?>
</body>
</html>