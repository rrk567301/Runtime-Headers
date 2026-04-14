@class NSObject, NSUUID, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSMacWakeSleepMonitor : CSEventMonitor

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL deviceIsInSleep;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) NSUUID *token;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)type;
- (id)init;
- (void)addObserver:(id)a0;
- (void)willSleep;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)hasPoweredOn;

@end
