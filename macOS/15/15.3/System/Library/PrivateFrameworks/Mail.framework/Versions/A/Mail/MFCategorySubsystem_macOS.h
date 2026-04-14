@class NSBackgroundActivityScheduler;

@interface MFCategorySubsystem_macOS : EDCategorySubsystem

@property (retain, nonatomic) NSBackgroundActivityScheduler *categoryMigrationScheduler;

- (void).cxx_destruct;
- (id)initWithPersistence:(id)a0 userProfileProvider:(id)a1 vipManager:(id)a2 sourceApplicationBundleIdentifier:(id)a3 categorizationAnalyticsLogger:(id)a4;
- (void)registerBusinessesGroupingTask;
- (void)registerInboxMigrationTasks;

@end
