const rand5 = () => Math.floor(5 * Math.random());

const rand2 = () => {
    let rand4;
    do {
        rand4 = rand5();
    } while(rand4 == 4);
    return rand4 % 2;
};

const rand7 = () => {
    let rand7;
    do {
        rand7 = rand2();
        rand7 <<= 1;
        rand7 |= rand2();
        rand7 <<= 1;
        rand7 |= rand2();
    } while(rand7 == 7);
    return rand7;
};
