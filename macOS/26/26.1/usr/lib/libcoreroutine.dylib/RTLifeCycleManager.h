@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, RTWatchdogManager;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) RTWatchdogManager *watchdogManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)addService:(id)a0;
- (void)_start;
- (void)start;
- (void)addListener:(id)a0 machPort:(id)a1;
- (void)_exit;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)serviceWithClass:(Class)a0;
- (void)exit;
- (void)exitWithDelay:(double)a0;
- (id)init;

@end
