@class NSString, HMDEventCounterGroup, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHH2MigrationLogEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
