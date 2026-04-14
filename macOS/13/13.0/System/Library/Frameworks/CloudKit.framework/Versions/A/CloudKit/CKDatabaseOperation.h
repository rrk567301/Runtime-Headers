@class CKDatabase, CKDatabaseOperationInfo;

@interface CKDatabaseOperation : CKOperation

@property (readonly, nonatomic) CKDatabaseOperationInfo *operationInfo;
@property (retain, nonatomic) CKDatabase *database;

- (void).cxx_destruct;
- (long long)databaseScope;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (BOOL)zoneIDHasCorrectDatabaseScope:(id)a0 error:(id *)a1;

@end
