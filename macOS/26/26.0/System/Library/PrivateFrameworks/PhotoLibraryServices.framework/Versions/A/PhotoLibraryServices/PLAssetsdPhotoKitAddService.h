@class NSString, NSPersistentStoreCoordinator, PLCameraCaptureTaskConstraintCoordinator, PLAssetsdConnectionAuthorization;

@interface PLAssetsdPhotoKitAddService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitAddServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCameraCaptureTaskConstraintCoordinator *_cameraTaskConstraintCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)persistentStoreCoordinator;
- (id)clientBundleID;
- (id)clientDisplayName;
- (void)dealloc;
- (id)clientDescription;
- (unsigned long long)libraryRole;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (void).cxx_destruct;
- (void)applyChangesRequest:(id)a0 reply:(id /* block */)a1;
- (void)commitRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)validatePhotosAccessScopeForChangesRequest:(id)a0;

@end
