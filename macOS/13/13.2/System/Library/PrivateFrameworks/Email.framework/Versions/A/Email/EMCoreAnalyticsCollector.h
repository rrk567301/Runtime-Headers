@class EFLocked;
@protocol EFScheduler;

@interface EMCoreAnalyticsCollector : NSObject

@property (readonly, nonatomic) EFLocked *periodicDataProviders;
@property (readonly, nonatomic) id<EFScheduler> oneTimeScheduler;
@property (readonly, nonatomic) id<EFScheduler> registrationScheduler;
@property (nonatomic) BOOL registered;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)logOneTimeEvent:(id)a0;
- (id)registerForLogEventsWithPeriodicDataProvider:(id)a0;
- (void)_registerXPCActivity;
- (void)_logPeriodicEvents;

@end
