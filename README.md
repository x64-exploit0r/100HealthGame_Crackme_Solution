# 100HealthGame_Crackme_Solution 
I have uploaded my crackme on [Crackmes.one](https://crackmes.one/crackme/65ae9d45eef082e477ff5f98)

==Solution:==

1: Everything in the game is happing in this part of the code ![Screenshot 2024-01-27 192758](https://github.com/Aryan-notEthical/100HealthGame_Crackme_Solution/assets/103557267/e37587e9-29b6-4c68-a42e-a2975bbfa0b9)


![Screenshot 2024-01-27 192316](https://github.com/Aryan-notEthical/100HealthGame_Crackme_Solution/assets/103557267/bdc1117f-66b9-4433-a64e-a3d6649830e4)
2:here the "sub esp, 28" This line decrements the stack pointer (esp) by 28, effectively allocating 28 bytes of space on the stack. This space is used for storing local variables or temporary data.
3: "mov dword ptr ss:[ebp-C], ecx" This line moves the value in the ecx register to the memory location pointed to by the ebp register minus 12 (C in hexadecimal is 12 in decimal). This is typically used to store a function's parameter or local variable.
4: "lea edx, dword ptr ds:[eax+A]" This line loads the effective address of the memory location that is a distance A (10 in hexadecimal) away from the memory location pointed to by the eax register into the edx register. **When you will first open the crackme you will see "lea edx, dword ptr ds:[eax-A]" here eax is being decreased by A (a.k.a 10)**.

