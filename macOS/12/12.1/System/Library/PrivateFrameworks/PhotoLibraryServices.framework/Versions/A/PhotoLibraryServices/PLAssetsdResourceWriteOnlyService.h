@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol>

@property (readonly, nonatomic) PLAssetsdConnectionAuthorization *connectionAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeAssetWithHash:(id)a0 orPublicGlobalUUID:(id)a1 fromStreamID:(id)a2 reply:(id /* block */)a3;
- (void)addAssetWithHash:(id)a0 orPublicGlobalUUID:(id)a1 toStreamID:(id)a2 reply:(id /* block */)a3;
- (void)saveAssetWithDataAndPorts:(id)a0 imageSurface:(id)a1 previewImageSurface:(id)a2 reply:(id /* block */)a3;
- (void)saveAssetWithDataAndPorts:(id)a0 clientConnection:(id)a1 imageSurface:(id)a2 previewImageSurface:(id)a3 reply:(id /* block */)a4;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (void)_modifyAssetWithHash:(id)a0 orPublicGlobalUUID:(id)a1 forStreamID:(id)a2 addToStream:(BOOL)a3 reply:(id /* block */)a4;

@end
