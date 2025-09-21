@interface SATaskStateInTransition : SATaskState {
    unsigned long long _transitionType;
}

- (id)initWithKCDataTransitioningTask:(const struct transitioning_task_snapshot { unsigned long long x0; unsigned long long x1; unsigned long long x2; int x3; char x4[32]; } *)a0 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x0; unsigned long long x1; } *)a1 memoryStatus:(const struct task_memorystatus_snapshot { int x0; int x1; int x2; int x3; } *)a2 machTimebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a3 andDonatingUniquePids:(id)a4 startTimestamp:(id)a5 endTimestamp:(id)a6 startSampleIndex:(unsigned long long)a7 endSampleIndex:(unsigned long long)a8;
- (unsigned long long)transitionType;

@end
