@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long attendingState;

+ (id)sharedInstance;

- (unsigned long long)getAttendingState;
- (id)init;
- (BOOL)isAttendingForDictation;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)updateState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (BOOL)isAttending;

@end
