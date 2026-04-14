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

- (unsigned long long)libraryRole;
- (id)clientDescription;
- (id)clientDisplayName;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (id)persistentStoreCoordinator;
- (id)clientBundleID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyChangesRequest:(id)a0 reply:(id /* block */)a1;
- (void)commitRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)validatePhotosAccessScopeForChangesRequest:(id)a0;

@end
