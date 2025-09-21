@class NSObject, NSUUID, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSMacWakeSleepMonitor : CSEventMonitor

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL deviceIsInSleep;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) NSUUID *token;

+ (id)sharedInstance;

- (void)willSleep;
- (unsigned long long)type;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)hasPoweredOn;

@end
