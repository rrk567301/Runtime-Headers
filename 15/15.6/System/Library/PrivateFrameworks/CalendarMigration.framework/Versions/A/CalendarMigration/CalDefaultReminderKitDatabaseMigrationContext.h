@class REMDatabaseMigrationContext, NSString, REMStore;

@interface CalDefaultReminderKitDatabaseMigrationContext : NSObject <CalReminderKitDatabaseMigrationContext>

@property (readonly, nonatomic) REMDatabaseMigrationContext *remDatabaseMigrationContext;
@property (readonly, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) char shouldDeleteMigratedData;
@property (readonly, nonatomic) char shouldPerformMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)remMigrationStageFromCalMigrationStage:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (char)ensureAccountsExist:(id)a0 error:(id *)a1;
- (void)didEndMigrationWithSuccess:(char)a0;
- (void)migrationDidFinishWithResult:(unsigned long long)a0;
- (void)recordMigrationFailure:(id)a0;
- (void)willBeginMigration;

@end
