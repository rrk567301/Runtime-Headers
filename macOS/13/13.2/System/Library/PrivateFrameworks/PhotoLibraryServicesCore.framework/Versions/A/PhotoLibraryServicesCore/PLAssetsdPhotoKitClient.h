@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>

+ (BOOL)inTransactionProxy;
+ (BOOL)sendChangesRequest:(id)a0 usingProxyFactory:(id)a1 error:(id *)a2;
+ (void)setInTransactionProxy:(BOOL)a0 queue:(id)a1;
+ (void)sendChangesRequest:(id)a0 usingProxyFactory:(id)a1 reply:(id /* block */)a2;

- (id)clientName;
- (BOOL)processUniversalSearchJITForAssetUUID:(id)a0 processingTypes:(unsigned long long)a1 error:(id *)a2;
- (id)getUUIDsForAssetObjectIDs:(id)a0 filterPredicate:(id)a1 context:(id)a2 error:(id *)a3;
- (id)getUUIDsForCloudIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)sendChangesRequest:(id)a0 error:(id *)a1;
- (void)sendChangesRequest:(id)a0 reply:(id /* block */)a1;
- (id)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)a0 bundleID:(id)a1 processingTypes:(unsigned long long)a2 error:(id *)a3;

@end
