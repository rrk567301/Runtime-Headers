@interface SATaskStateKPerf : SATaskState {
    BOOL _filledSnap;
    BOOL _filledMem;
    BOOL _filledLatencyQoS;
    BOOL _filledRunawayMitigated;
}

@end
