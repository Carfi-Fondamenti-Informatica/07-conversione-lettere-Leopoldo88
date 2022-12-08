
if((int(a)>65&&int(a)<90)||(int(a)>97&&int(a)<122)){
    if((int(a)>65&&int(a)<90)){
        a=a-32;
    }
    if ((int(a)>97&&int(a)<122)){
        a=a+32;
    }

    return true;
}
else{
    return false;
}
}
