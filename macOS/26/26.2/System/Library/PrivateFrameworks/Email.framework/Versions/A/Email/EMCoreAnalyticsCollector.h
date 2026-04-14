@class EFLocked;
@protocol EFScheduler;

@interface EMCoreAnalyticsCollector : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _didRegister;
}

@property (readonly, nonatomic) EFLocked *blocks;
@property (readonly, nonatomic) id<EFScheduler> oneTimeScheduler;

+ (id)log;

- (void)_registerXPCActivity;
- (void)_logPeriodicEvents;
- (id)registerForLogEventsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)logOneTimeEvent:(id)a0;
- (id)init;
- (id)registerForLogEventsWithPeriodicDataProvider:(id)a0;

@end
