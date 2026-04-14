@class SATimestamp, NSMutableSet;

@interface SAKPerfState : NSObject {
    NSMutableSet *_onCoreThreads;
    BOOL _mostRecentSampleIsPET;
    int _petTimerID;
    struct ktrace_session { } *_session;
    unsigned long long _latestMachAbsTimeParsed;
    SATimestamp *_mostRecentSampleTimestamp;
}

- (void).cxx_destruct;

@end
