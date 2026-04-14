@class NSString, NSObject;
@protocol OS_dispatch_queue, STYWakeDetectorDelegate, STYWakeDataProvider;

@interface STYWakeDetector : NSObject <STYWakeDataConsumer> {
    struct { unsigned long long eventTimestamps[9]; unsigned long long previousEventTimestamps[9]; } _state;
    unsigned long long _reportedUserActive;
    unsigned long long _reportedUserWake;
    unsigned long long _reportedFinalSignpost;
    NSObject<OS_dispatch_queue> *_queue;
    id<STYWakeDetectorDelegate> _delegate;
    id<STYWakeDataProvider> _dataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (id)initWithDelegate:(id)a0 dataProvider:(id)a1;
- (BOOL)detectWake:(id *)a0;
- (id)createWakeEventFromCurrentWake;
- (unsigned long long)wakeTypeFromSleepType:(unsigned long long)a0;
- (void)consumeWakeTimestamp:(unsigned long long)a0 ofType:(unsigned long long)a1;
- (BOOL)wakeDataProviderShouldResumeAfterInterruption:(id)a0;

@end
