

#ifndef EMULATORTEST_CPU_H
#define EMULATORTEST_CPU_H
#define PUSH(arg) (writeMemory8(sp--,arg))
#define POP(arg)  (readMemory8(sp++))


extern uint32_t cpuTime;

void InitCPU();
void cycleCPU(int numClocks);

#endif //EMULATORTEST_CPU_H
