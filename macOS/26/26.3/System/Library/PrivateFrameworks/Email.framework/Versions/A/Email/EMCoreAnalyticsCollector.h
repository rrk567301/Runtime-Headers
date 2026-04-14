@class EFLocked;
@protocol EFScheduler;

@interface EMCoreAnalyticsCollector : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _didRegister;
}

@property (readonly, nonatomic) EFLocked *blocks;
@property (readonly, nonatomic) id<EFScheduler> oneTimeScheduler;

+ (id)log;

- (id)registerForLogEventsWithBlock:(id /* block */)a0;
- (void)logOneTimeEvent:(id)a0;
- (void)_logPeriodicEvents;
- (id)init;
- (void).cxx_destruct;
- (id)registerForLogEventsWithPeriodicDataProvider:(id)a0;
- (void)_registerXPCActivity;

@end
