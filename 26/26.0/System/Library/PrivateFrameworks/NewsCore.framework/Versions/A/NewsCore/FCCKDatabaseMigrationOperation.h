@class NSMutableArray, FCCKPrivateDatabase;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseMigrationOperation : FCOperation {
    FCCKPrivateDatabase *_database;
    id<FCCKDatabaseMigrator> _migrator;
    id /* block */ _migrationCompletionHandler;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

- (void)performOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void).cxx_destruct;

@end
