@interface PLAssetsdResourceWriteOnlyClient : PLAssetsdBaseClient

- (void)removeAssetWithHash:(id)a0 orPublicGlobalUUID:(id)a1 fromStreamID:(id)a2 reply:(id /* block */)a3;
- (void)addAssetWithHash:(id)a0 orPublicGlobalUUID:(id)a1 toStreamID:(id)a2 reply:(id /* block */)a3;
- (void)saveAssetWithJobDictionary:(id)a0 imageSurface:(struct __IOSurface { } *)a1 previewImageSurface:(struct __IOSurface { } *)a2 completionHandler:(id /* block */)a3;

@end
