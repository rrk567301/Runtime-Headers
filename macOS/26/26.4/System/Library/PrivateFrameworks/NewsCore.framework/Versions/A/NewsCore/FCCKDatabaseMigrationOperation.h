@class NSMutableArray, FCCKPrivateDatabase;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseMigrationOperation : FCOperation {
    FCCKPrivateDatabase *_database;
    id<FCCKDatabaseMigrator> _migrator;
    id /* block */ _migrationCompletionHandler;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;
- (void)performOperation;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void).cxx_destruct;

@end
