@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long attendingState;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)getAttendingState;
- (void).cxx_destruct;
- (BOOL)isAttendingForDictation;
- (id)init;
- (BOOL)isAttending;
- (void)updateState:(unsigned long long)a0;

@end
