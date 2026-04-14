@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, RTWatchdogManager;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) RTWatchdogManager *watchdogManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)addService:(id)a0;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void)exit;
- (void).cxx_destruct;
- (void)addListener:(id)a0 machPort:(id)a1;
- (void)_exit;
- (void)start;
- (void)exitWithDelay:(double)a0;
- (void)_start;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;
- (id)serviceWithClass:(Class)a0;
- (id)init;
- (void)dealloc;

@end
