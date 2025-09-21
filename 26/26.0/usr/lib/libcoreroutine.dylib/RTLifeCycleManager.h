@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, RTWatchdogManager;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) RTWatchdogManager *watchdogManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)_exit;
- (void)_start;
- (void)exitWithDelay:(double)a0;
- (void)exit;
- (void)addService:(id)a0;
- (void)start;
- (void)dealloc;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (id)init;
- (id)serviceWithClass:(Class)a0;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;
- (void)addListener:(id)a0 machPort:(id)a1;
- (void).cxx_destruct;

@end
