@class CKDatabase, CKDatabaseOperationInfo;

@interface CKDatabaseOperation : CKOperation

@property (readonly, nonatomic) CKDatabaseOperationInfo *operationInfo;
@property (retain, nonatomic) CKDatabase *database;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (char)CKOperationShouldRun:(id *)a0;
- (id)databaseIfNotNil;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (char)zoneIDHasCorrectDatabaseScope:(id)a0 error:(id *)a1;

@end
