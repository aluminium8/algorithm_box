# review_about_cpp

this project has the contents about cpp's 
detailed specifications

## random number generator
### Mersenne twister
 |``` name on code ```|0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 
| ---------------------------------- |--------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | 
 |```A1 (seed is 1) ```| 1791095845 | 4282876139 | 3093770124 | 4005303368 | 491263 | 550290313 | 1298508491 | 4290846341 | 630311759 | 1013994432 | 
 |```A2 (seed is 1 as same as A1) ```| 1791095845 | 4282876139 | 3093770124 | 4005303368 | 491263 | 550290313 | 1298508491 | 4290846341 | 630311759 | 1013994432 | 
 |```B2 (seed is 2) ```| 1872583848 | 794921487 | 111352301 | 4000937544 | 2360782358 | 4070471979 | 1869695442 | 2081981515 | 1805465960 | 1376693511 | 
###  std::random_device(nondeterministic) 
 |```name on code```|0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 
| --------------------- |--------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | --------------- | 
 |``` (this engine can't use seed) ```| 3357198980 | 3040667520 | 2338653753 | 2760701205 | 3217750916 | 2571606678 | 3233719823 | 2959987661 | 1274599855 | 618993429 | 
### processing time on generate 
I'll check for 5*10^6 generating time on github actions machine

this value is change at this folder pushed

__Note: Be aware that compiler optimizations killed and Length of processing time is not stable__

mt19937 time is 82.725[ms]

std::random_device time is 3350.42[ms]

