@class NSString;

@interface AVBMediaClockThread : AVBMediaClockSink <AVBClockClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _countLock;
    long long _runningCount;
    char _hasLastTimestamp;
    char _threadIsRunning;
    char _threadShouldBeRunning;
    unsigned int _startSemaphore;
    unsigned int _stopSemaphore;
}

@property (nonatomic) char useRealtimePriority;
@property (nonatomic) unsigned long long samplesPerTimestamp;
@property (copy, nonatomic) NSString *threadName;
@property (nonatomic) char useNominal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)stopThread;
- (void)updateTiming;
- (void)_performStartThread;
- (void)_performStopThread;
- (void)changedMediaClockSource:(id)a0;
- (void)clockedThread;
- (void)forceStartIfShouldBeRunning;
- (char)forceStopIfRunning;
- (unsigned long long)nominalPeriod;
- (char)startThread;
- (void)systemSleep;
- (void)systemWake;
- (void)threadWorkFromTimeSyncTime:(unsigned long long)a0 toTimeSyncTime:(unsigned long long)a1;
- (void)updatedMediaClockSource:(id)a0;

@end
