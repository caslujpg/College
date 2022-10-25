let checkboxThemeMode = document.getElementById("theme-switch");

checkboxThemeMode.onclick = function changeThemeMode()
{
    let themeMode = document.getElementById("body").className.split('-')[0];
    let themeColor = document.getElementById("body").className.split('-')[1];

    if(themeMode.includes("dark"))
      themeMode = "light"
    else
      themeMode = "dark"

    document.getElementById("body").className = themeMode + "-" + themeColor;
}

