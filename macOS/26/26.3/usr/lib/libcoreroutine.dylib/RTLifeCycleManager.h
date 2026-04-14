@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, RTWatchdogManager;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) RTWatchdogManager *watchdogManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)serviceWithClass:(Class)a0;
- (void)addService:(id)a0;
- (void)start;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;
- (id)init;
- (void)exit;
- (void)_start;
- (void)_exit;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void)addListener:(id)a0 machPort:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)exitWithDelay:(double)a0;

@end
