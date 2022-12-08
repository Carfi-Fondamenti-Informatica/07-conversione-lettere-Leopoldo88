if((a>'A'&&a<'Z')||(a>'a'&&int(a)<'z')){

    if(a>'A'&&a<'Z'){
        b=a+32;
    }
    if (a>'a'&&int(a)<'z'){
        c=a-32;
    }
    return true;
}
else{
    return false;
}
}
