@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCFPFSMigrationScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_trialRefreshQueue;
    NSObject<OS_dispatch_source> *_trialRefreshSource;
    NSUserDefaults *_fpfsFeatureDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_enableFPFSFeature;
- (id)_getBootTime;
- (id)_getBootUUID;
- (BOOL)_isMigrationToFPFSDisabled;
- (void)_removeUserDefaultsForMigrationDisabled;
- (void)_scheduleRebootIfNeeded;
- (void)_scheduleXPCActivityForReboot;
- (void)_stopTrialRefresh;
- (void)_stopXPCActivityForReboot;
- (void)fixFPFSFeatureFlagUserDefaults;
- (void)removeSchedule;
- (void)scheduleMigrationIfNeeded;

@end
