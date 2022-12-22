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
 |``` (this engine can't use seed) ```| 2037833469 | 3641723358 | 3744854187 | 4113193095 | 774031829 | 1186342697 | 1497543602 | 3186951019 | 3961650404 | 2665053567 | 
### processing time on generate 
I'll check for 5*10^6 generating time on github actions machine

this value is change at this folder pushed

__Note: Be aware that compiler optimizations killed and Length of processing time is not stable__

mt19937 time is 82.391[ms]

std::random_device time is 3142.25[ms]

