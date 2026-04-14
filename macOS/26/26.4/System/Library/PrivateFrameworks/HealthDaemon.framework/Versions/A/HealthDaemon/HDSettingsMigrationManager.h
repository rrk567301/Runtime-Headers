@class NSString, HDProfile, NSArray, NSObject, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue, HDSettingsMigrationManagerDelegate;

@interface HDSettingsMigrationManager : NSObject <HDProfileReadyObserver> {
    HDProfile *_profile;
    NSString *_identifier;
    long long _currentMigrationVersion;
    NSArray *_migrationSteps;
    NSUserDefaults *_migrationVersionDefaults;
    NSString *_lastMigratedVersionKey;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<HDSettingsMigrationManagerDelegate> delegate;

- (void)profileDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_queue_performMigrationFromCurrentMigrationVersion:(long long)a0;
- (id)initWithProfile:(id)a0 identifier:(id)a1 currentMigrationVersion:(long long)a2 migrationSteps:(id)a3 delegate:(id)a4 loggingCategory:(id)a5;
- (id)initWithProfile:(id)a0 identifier:(id)a1 currentMigrationVersion:(long long)a2 migrationSteps:(id)a3 delegate:(id)a4 migrationVersionDefaults:(id)a5 lastMigratedVersionKey:(id)a6 loggingCategory:(id)a7;

@end
