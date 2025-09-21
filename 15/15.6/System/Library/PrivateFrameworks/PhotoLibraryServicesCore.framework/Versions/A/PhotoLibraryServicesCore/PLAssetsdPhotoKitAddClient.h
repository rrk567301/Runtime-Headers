@interface PLAssetsdPhotoKitAddClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>

- (id)clientName;
- (char)sendChangesRequest:(id)a0 error:(id *)a1;
- (void)sendChangesRequest:(id)a0 reply:(id /* block */)a1;

@end
