@class NSString, SATimestamp, NSMutableDictionary, NSMutableArray;

@interface SAStack : NSObject {
    char _omit;
    char _isMainThread;
    char _isTargetCallTree;
    char _isIdleWorkQueue;
    char _threadNameChanges;
    char _isProcessorIdleThread;
    char _isGlobalForcedIdleThread;
    char _isKernel;
    int _minPriority;
    int _maxPriority;
    int _minBasePriority;
    int _maxBasePriority;
    unsigned long long _count;
    NSMutableArray *_dispatchQueues;
    NSMutableArray *_swiftTasks;
    NSMutableArray *_threadIds;
    NSString *_threadName;
    unsigned long long _firstSampleIndex;
    unsigned long long _lastSampleIndex;
    SATimestamp *_timeWhenFirstAttemptedToSample;
    unsigned long long _cpuTimeNs;
    unsigned long long _cpuInstructions;
    unsigned long long _cpuCycles;
    NSMutableArray *_rootObjects;
    NSMutableDictionary *_binaryImagesHitByTask;
    unsigned long long _ioSize;
    unsigned long long _numIOs;
    double _timeSinceThreadWasMadeRunnable;
}

- (void).cxx_destruct;

@end
