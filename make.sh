echo -e "\033[32m Please select region\033[0m"
echo -e "\033[32m 1:US(default)\033[0m"
echo -e "\033[32m 2:EU\033[0m"
echo -e "\033[32m 3:JP\033[0m"
echo -e "\033[32m 4:AU\033[0m"
echo -e "\033[32m 5:TW\033[0m"
echo -e "\033[32m 6:CN470\033[0m"


read -p "" REGION

echo "loraNodeLib/" > .mbedignore
rm lib*.a

if [ "$REGION" == "1" ]; then
	echo "Ok, build US"
	test ! -e loraNodeLib/*US*.a && echo -e "\033[31m Can not find library!!!!! \033[0m" && exit 0
	cp loraNodeLib/*US*.a .
elif [ "$REGION" == "2" ]; then
	echo "Ok, build EU"
	test ! -e loraNodeLib/*EU*.a && echo -e "\033[31m Can not find library!!!!! \033[0m" && exit 0
	cp loraNodeLib/*EU*.a .
elif [ "$REGION" == "3" ]; then
	echo "Ok, build JP"
	test ! -e loraNodeLib/*JP*.a && echo -e "\033[31m Can not find library!!!!! \033[0m" && exit 0
	cp loraNodeLib/*JP*.a .
elif [ "$REGION" == "4" ]; then
	echo "Ok, build AU"
	test ! -e loraNodeLib/*AU*.a && echo -e "\033[31m Can not find library!!!!! \033[0m" && exit 0
	cp loraNodeLib/*AU*.a .
elif [ "$REGION" == "5" ]; then
	echo "Ok, build TW"
	test ! -e loraNodeLib/*TW*.a && echo -e "\033[31m Can not find library!!!!! \033[0m" && exit 0
	cp loraNodeLib/*TW*.a .
elif [ "$REGION" == "6" ]; then
	echo "Ok, build CN470"
	test ! -e loraNodeLib/*CN470*.a && echo -e "\033[31m Can not find library!!!!! \033[0m" && exit 0
	cp loraNodeLib/*CN470*.a .
else
	echo "Default: build US"
	test ! -e loraNodeLib/*US*.a && echo -e "\033[31m Can not find library!!!!! \033[0m" && exit 0
	cp loraNodeLib/*US*.a .
fi

mbed compile -t GCC_ARM -m NUCLEO_L443RC  -c


