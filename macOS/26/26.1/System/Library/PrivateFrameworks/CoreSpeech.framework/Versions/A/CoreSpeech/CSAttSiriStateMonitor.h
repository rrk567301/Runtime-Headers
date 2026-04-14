@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long attendingState;

+ (id)sharedInstance;

- (void)updateState:(unsigned long long)a0;
- (BOOL)isAttendingForDictation;
- (unsigned long long)getAttendingState;
- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isAttending;
- (void)_stopMonitoring;
- (id)init;

@end
