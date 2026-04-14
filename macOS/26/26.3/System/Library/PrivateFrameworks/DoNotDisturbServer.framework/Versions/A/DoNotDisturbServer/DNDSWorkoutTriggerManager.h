@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSWorkoutTriggerManagerDataSource, DNDSAutomationManagerDataSource;

@interface DNDSWorkoutTriggerManager : NSObject <DNDSAutomationManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<DNDSWorkoutTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (BOOL)_isWorkoutTriggerEnabledForModeConfiguration:(id)a0;
- (void)refreshMigratingIfNecessary;
- (id)init;
- (void)_configureWorkoutTriggerWithMode:(id)a0;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (void)pairedDeviceDidChange;
- (void)_refreshMigratingIfNecessary;
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)a0;
- (void)_refresh;

@end
