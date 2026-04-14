@class REMDatabaseMigrationContext, NSString, REMStore;

@interface CalDefaultReminderKitDatabaseMigrationContext : NSObject <CalReminderKitDatabaseMigrationContext>

@property (readonly, nonatomic) REMDatabaseMigrationContext *remDatabaseMigrationContext;
@property (readonly, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)remMigrationStageFromCalMigrationStage:(unsigned long long)a0;

- (void)willBeginMigration;
- (BOOL)ensureAccountsExist:(id)a0 error:(id *)a1;
- (void)didEndMigrationWithSuccess:(BOOL)a0;
- (id)init;
- (void)migrationDidFinishWithResult:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)recordMigrationFailure:(id)a0;

@end
