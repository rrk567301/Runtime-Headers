@class NSString, NSArray, SACountedState, NSMutableArray;

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization> {
    unsigned char _threadPriority;
    BOOL _isPartOfADeadlock;
    BOOL _isBlockedByADeadlock;
    int _pid;
    unsigned int _pageGrabUPLSampleCount;
    unsigned int _pageGrabIOPLSampleCount;
    unsigned int _microstackshotState;
    int _originPid;
    int _proximatePid;
    unsigned long long _threadId;
    NSArray *_blockingInfos;
    SACountedState *_state;
    unsigned long long _energyNJ;
    NSMutableArray *_childIOEvents;
    NSMutableArray *_timeRanges;
    unsigned long long _endSampleIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
