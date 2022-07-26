<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<title>Traffic Light Simulator</title>
	<link type="text/css" rel="stylesheet" href="css/bulma.css">
	<link type="text/css" rel="stylesheet" href="css/bulma-rtl.css">
	<link type="text/css" rel="stylesheet" href="fontawesome/css/fontawesome.min.css">
	<link type="text/css" rel="stylesheet" href="fontawesome/css/all.css">
	<script src="js/jquery.js" type="text/javascript" charset="utf-8" async defer></script>
	<script src="js/popper.js" type="text/javascript" charset="utf-8" async defer></script>
	<script src="js/sweetalert.min.js" type="text/javascript" charset="utf-8" async defer></script>

</head>
<body>
		<nav class="level primary has-background-info is-full navbar">
			<div class="level-left">
				<div class="level-item">
					<h2 class="is-3 m-4"><a class="has-text-info-light title" href="index.php">Traffic Light Simulator</a></h2>
	    	</div>
	    </div>
	</nav>
	<div class="column is-full has-background-light m-1 is-align-content-space-evenly is-parent box">
			<h2 class="has-text-info-light title is-4 has-background-info p-2">Traffic Lights Connectivity Status</h2>
			<div class="tile is-child box container is-align-content-space-evenly is-centered">
				<p>Status:
					<?php 
						$portWay="COM4";
						$port=fopen($portWay,"w+");

						if($port===false){
							die("CONNECTION DISABLED");

						}else{
							echo "CONNECTION ACTIVE";
						}
							sleep(2);

					 ?>

				</p>	
				<br>
				<form action="index.php" method="POST">
					<input type="hidden" name="turn" value="d">
					<input class="button is-primary" type="submit" value="Turn Automatic">
				</form>
			</div>
		</div>
		<br>
	<div class="columns tile is-ancestor">
		<div class="column is-one-fourth has-background-light m-1 is-align-content-space-evenly is-parent box">
			<h2 class="has-text-info-light title is-4 has-background-primary p-2">Traffic Light 1</h2>
			<div class="tile is-child box container is-align-content-space-evenly">
				<form action="index.php" method="POST">
					<input type="hidden" name="turn" value="q">
					<input class="button is-primary" type="submit" value="activate">
				</form>
			</div>
		</div>
		<div class="is-1"></div>
		<div class="column is-one-fourth has-background-light m-1 is-align-content-space-evenly is-parent box">
			<h2 class="has-text-info-light title is-4 has-background-success p-2">Traffic Light 2</h2>
			<div class="tile is-child box container is-align-content-space-evenly">
				<form action="index.php" method="POST">
					<input type="hidden" name="turn" value="w">
					<input class="button is-success" type="submit"  value="activate">
				</form>
			</div>
		</div>
		<div class="is-1"></div>
		<div class="column is-one-fourth has-background-light m-1 is-align-content-space-evenly is-parent box">
			<h2 class="has-text-info-light title is-4 has-background-warning p-2">Traffic Light 3</h2>
			<div class="tile is-child box container is-align-content-space-evenly">
				<form action="index.php" method="POST">
					<input type="hidden" name="turn" value="e">
					<input class="button is-dark" type="submit"  value="activate">
				</form>
			</div>
		</div>
		<div class="is-1"></div>
		<div class="column is-one-fourth has-background-light m-1 is-align-content-space-evenly is-parent box">
			<h2 class="has-text-info-light title is-4 has-background-danger p-2">Traffic Light 4</h2>
			<div class="tile is-child box container is-align-content-space-evenly">
				<form action="index.php" method="POST">
					<input type="hidden" name="turn" value="r">
					<input class="button is-danger" type="submit"value="activate">
				</form>
			</div>
		</div>
	</div>

	<?php 
	
	if ($_POST['turn']=="d") {
	 		fwrite($port,'d');
	 		
	 	}
	 else if ($_POST['turn']=="q") {
	 		fwrite($port,'q');
	 		
	 	}
	 else if ($_POST['turn']=="w") {
	 		fwrite($port,'w');
	 		
	 	}
	 	else if ($_POST['turn']=="e") {
	 		fwrite($port,'e');
	 		
	 	}
	 	else if ($_POST['turn']=="r") {
	 		fwrite($port,'r');
	 		
	 	}
	 	else{
	 		echo "Turned Off";
	 	}

	 ?>
		
	
</body>
</html>