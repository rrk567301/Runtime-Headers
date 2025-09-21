@class SAWaitInfo, NSString, SATurnstileInfo, NSMutableArray;

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization> {
    unsigned char _threadPriority;
    BOOL _isPartOfADeadlock;
    BOOL _isBlockedByADeadlock;
    int _pid;
    unsigned int _microstackshotState;
    int _originPid;
    int _proximatePid;
    unsigned long long _threadId;
    SAWaitInfo *_waitInfo;
    SATurnstileInfo *_turnstileInfo;
    struct _SACountedState { union { unsigned long long bits; struct { unsigned int pmiCycleIntervalMillions; unsigned short cpuSpeed100Mhz; unsigned char _cpuNumOffbyOne; unsigned char pCore : 1; unsigned char eCore : 1; unsigned char running : 1; unsigned char runnable : 1; unsigned char suspended : 1; } ; } ; } _state;
    NSMutableArray *_childIOEvents;
    NSMutableArray *_timeRanges;
    unsigned long long _endSampleIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
