@class PLPrimitiveAssetsdClient, PLAssetsdCloudInternalClient, PLAssetsdSyncClient, PLAssetsdClientState, PLAssetsdNotificationClient, PLAssetsdResourceAvailabilityClient, PLAssetsdLibraryInternalClient, PLAssetsdResourceClient, PLAssetsdLibraryManagementClient, PLAssetsdCloudClient, PLAssetsdResourceInternalClient, PLAssetsdNonBindingDebugClient, PLAssetsdPhotoKitClient, PLAssetsdMigrationClient, PLAssetsdPhotoKitAddClient, PLNonBindingAssetsdPhotoKitAddClient, PLAssetsdDebugClient, PLAssetsdDiagnosticsClient, PLAssetsdLibraryClient, PLAssetsdDemoClient, PLNonBindingAssetsdPhotoKitClient;

@interface PLAssetsdClient : NSObject {
    PLAssetsdClientState *_clientState;
    PLPrimitiveAssetsdClient *_highPriorityClient;
    PLPrimitiveAssetsdClient *_lowPriorityClient;
}

@property (readonly) PLNonBindingAssetsdPhotoKitAddClient *nonBindingPhotoKitAddClient;
@property (readonly) PLNonBindingAssetsdPhotoKitClient *nonBindingPhotoKitClient;
@property (readonly) PLAssetsdNonBindingDebugClient *nonBindingDebugClient;
@property (readonly) PLAssetsdDebugClient *debugClient;
@property (readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdNotificationClient *notificationClient;
@property (readonly) PLAssetsdSyncClient *syncClient;
@property (readonly) PLAssetsdMigrationClient *migrationClient;
@property (readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property (readonly) PLAssetsdCloudClient *cloudClient;
@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
@property (readonly) PLAssetsdResourceClient *resourceClient;
@property (readonly) PLAssetsdPhotoKitAddClient *photoKitAddClient;
@property (readonly) PLAssetsdResourceAvailabilityClient *resourceAvailabilityClient;
@property (readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property (readonly) PLAssetsdLibraryClient *libraryClient;

+ (id)sharedSystemLibraryAssetsdClient;

- (id)_primitiveClientForCurrentQoS;
- (id)initWithPhotoLibraryURL:(id)a0;
- (BOOL)_isSecondXPCConnectionDisabled;
- (id)systemLibraryURLReadOnlyClient;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)privacySupportClient;
- (void)sendDaemonJob:(id)a0 shouldRunSerially:(BOOL)a1 replyHandler:(id /* block */)a2;
- (void)waitUntilConnectionSendsAllMessages;
- (id)resourceWriteOnlyClient;
- (id)init;

@end
