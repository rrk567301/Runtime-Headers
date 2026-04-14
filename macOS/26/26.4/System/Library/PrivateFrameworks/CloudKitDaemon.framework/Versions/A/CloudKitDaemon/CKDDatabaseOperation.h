@interface CKDDatabaseOperation : CKDOperation

@property long long databaseScope;

- (id)analyticsPayload;
- (BOOL)supportsClearAssetEncryption;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (BOOL)needsUserKeySyncToPopulateServiceIdentity;
- (BOOL)isAnonymous;
- (id)CKStatusReportProperties;
- (void)_encryptMergeableDeltas:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPCSData:(id)a0 forFetchedRecordID:(id)a1;
- (void)setPCSData:(id)a0 forFetchedShareID:(id)a1;
- (void)setPCSData:(id)a0 forFetchedZoneID:(id)a1;
- (void)spawnAndRunOperationOfClass:(Class)a0 operationInfo:(id)a1 spawnQueue:(id)a2 container:(id)a3 operationConfigurationBlock:(id /* block */)a4;

@end
