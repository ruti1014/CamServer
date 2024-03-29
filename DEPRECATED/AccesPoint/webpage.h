//HTML + CSS + JavaScript codes for webpage
//=========================================
const char webpageCode[] =
R"=====(
<!DOCTYPE html>
<html>
<!------------------------------C S S--------------------------------->

<head>
    <style>
        .dropbtn {
            background-color: #4CAF50;
            color: white;
            padding: 16px;
            font-size: 16px;
            border: none;
            cursor: pointer;
        }

        /* The container <div> - needed to position the dropdown content */
        .dropdown {
            position: relative;
            display: inline-block;
        }

        /* Dropdown Content (Hidden by Default) */
        .dropdown-content {
            display: none;
            position: absolute;
            background-color: #f9f9f9;
            min-width: 160px;
            box-shadow: 0px 8px 16px 0px rgba(0, 0, 0, 0.2);
            z-index: 1;
        }

        /* Links inside the dropdown */
        .dropdown-content a {
            color: black;
            padding: 12px 16px;
            text-decoration: none;
            display: block;
        }

        /* Change color of dropdown links on hover */
        .dropdown-content a:hover {
            background-color: #f1f1f1
        }

        /* Show the dropdown menu on hover */
        .dropdown:hover .dropdown-content {
            display: block;
        }

        /* Change the background color of the dropdown button when the dropdown content is shown */
        .dropdown:hover .dropbtn {
            background-color: #3e8e41;
        }


        #orga {

            border: solid 1px black;
        }

        body {
            font-family: "Calibri";
            background-color: grey
        }

        h1 {
            color: whitesmoke;
            text-align: center;
            font-size: 50px;
        }
    </style>
    <title>ESP32 - CAM</title>
</head>
<!----------------------------H T M L--------------------------------->

<body>
    <h1>
        ESP32 Webpage <br> (HTML + CSS + JavaScript) <br><br>

    </h1>
    <div id="orga">

        <div class="dropdown">
            <button class="dropbtn">Dropdown</button>
            <div class="dropdown-content">
                <a href="/dev">Link 1</a>
                <a href="/dev">Link 2</a>
                <a href="/dev">Link 3</a>
            </div>
        </div>
    </div>
    <div id="orga">
        Controller Area
    </div>
    <!---------------------------JavaScript------------------------------->
    <script>
        //function displays text message
        let m1 = 'JavaScript is an object-oriented language'
        let m2 = ' that creates interactive effects within web browsers.'
        let m3 = ' The code syntax of JavaScript is similar to C++.'
        function JS1() {
            alert(m1 + m2 + m3);
        }
        //function prompts for name, then displays message
        function JS2() {
            let yourName;
            do {
                yourName = prompt("Who are you?");
            } while (!yourName);
            alert('Hello ' + yourName);
        }
        //function computes factorial of integer number
        function JS3() {
            let f = 1;
            let n = prompt('FACTORIAL\nEnter positive integer number: ');
            for (let i = 1; i <= n; i++) f = f * i;
            alert('Factorial = ' + f);
        }

        //Eventhandler
        document.addEventListener('keydown', function (event) {
            if (event.keyCode == 37) {
                alert('Left was pressed');

            }
            else if (event.keyCode == 39) {
                alert('Right was pressed');
            }
        }, true);
    </script>
</body>

</html>
)=====";















/*
 * 
 * //=========================================
//HTML + CSS + JavaScript codes for webpage
//=========================================
const char webpageCode[] =
R"=====(
<!DOCTYPE html>
<html>
<!------------------------------C S S--------------------------------->
<head>
    <style>
        #btn
        {
          display: inline;
          text-decoration: none;
          background: red;
          color:rgba(0, 0, 255, 0.7);
          font: 80px calibri;
          border-radius: 50%;
          box-shadow: 0px 0px 10px 15px #000000;
          border: solid 10px rgba(255, 255, 0, 0.9);
          cursor: pointer;
        }
        body {font-family: "Calibri"; background-color: grey}
        h1   {color: whitesmoke; text-align:center; font-size: 50px;}
    </style>
</head>
<!----------------------------H T M L--------------------------------->
<body>
    <h1>
        ESP8266 Webpage <br> (HTML + CSS + JavaScript) <br><br>
        <a href="#" id="btn" ONCLICK='JS1()'>JS1</a> <br><br>
        <a href="#" id="btn" ONCLICK='JS2()'>JS2</a> <br><br>
        <a href="#" id="btn" ONCLICK='JS3()'>JS3</a>
    </h1>
<!---------------------------JavaScript------------------------------->
<script>
    //function displays text message
    let m1 = 'JavaScript is an object-oriented language'
    let m2 = ' that creates interactive effects within web browsers.'
    let m3 = ' The code syntax of JavaScript is similar to C++.'
    function JS1()
    {
      alert(m1 + m2 + m3);
    }
    //function prompts for name, then displays message
    function JS2()
    {
        let yourName;
        do
        {
            yourName = prompt("Who are you?");
        } while (!yourName);
        alert('Hello ' + yourName);
    }
    //function computes factorial of integer number
    function JS3()
    {
        let f = 1;
        let n = prompt('FACTORIAL\nEnter positive integer number: ');
        for(let i=1; i<=n; i++) f = f * i;
        alert('Factorial = ' + f);
    }   
</script>
</body>
</html>
)=====";
 * 
  */
