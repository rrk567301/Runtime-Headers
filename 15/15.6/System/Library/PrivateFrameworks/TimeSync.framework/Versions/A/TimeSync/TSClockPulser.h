@class NSString, TSClock;

@interface TSClockPulser : NSObject <TSClockClient> {
    TSClock *_pulseClock;
    char _hasLastTimestamp;
    char _holdoverMode;
    int _lastLockState;
    char _threadIsRunning;
    char _threadShouldBeRunning;
    unsigned int _startSemaphore;
    unsigned int _stopSemaphore;
}

@property (copy, nonatomic) id /* block */ pulseHandler;
@property (nonatomic) char useRealtimePriority;
@property (nonatomic) unsigned long long pulsePeriod;
@property (nonatomic) int pulseOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didBeginClockGrandmasterChangeForClock:(id)a0;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didEndClockGrandmasterChangeForClock:(id)a0;
- (id)initWithPulseClock:(id)a0;
- (void)pulseThread;
- (char)startPulsing;
- (char)stopPulsing;

@end
