@class CKDatabase, CKDatabaseOperationInfo;

@interface CKDatabaseOperation : CKOperation

@property (readonly, nonatomic) CKDatabaseOperationInfo *operationInfo;
@property (retain, nonatomic) CKDatabase *database;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (long long)databaseScope;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void).cxx_destruct;
- (id)databaseIfNotNil;
- (BOOL)zoneIDHasCorrectDatabaseScope:(id)a0 error:(id *)a1;

@end
