@class NSBackgroundActivityScheduler;

@interface MFCategorySubsystem_macOS : EDCategorySubsystem

@property (retain, nonatomic) NSBackgroundActivityScheduler *categoryMigrationScheduler;
@property (retain, nonatomic) NSBackgroundActivityScheduler *authenticationMigrationScheduler;
@property (retain, nonatomic) NSBackgroundActivityScheduler *businessGroupingScheduler;

- (id)initWithPersistence:(id)a0 userProfileProvider:(id)a1 vipManager:(id)a2 sourceApplicationBundleIdentifier:(id)a3 categorizationAnalyticsLogger:(id)a4;
- (void)registerAuthStateMigrationTask;
- (void).cxx_destruct;
- (void)registerInboxMigrationTasks;
- (void)registerBusinessesGroupingTask;

@end
