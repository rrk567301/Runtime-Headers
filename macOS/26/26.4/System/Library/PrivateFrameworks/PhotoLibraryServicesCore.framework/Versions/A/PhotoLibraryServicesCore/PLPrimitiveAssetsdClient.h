@class PLAutoBindingProxyFactory, PLAssetsdCloudInternalClient, PLAssetsdSyncClient, PLAssetsdClientState, PLAssetsdNotificationClient, PLAssetsdResourceAvailabilityClient, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdLibraryInternalClient, PLAssetsdPrivacySupportClient, PLAssetsdResourceClient, PLAssetsdLibraryManagementClient, PLAssetsdCloudClient, PLAssetsdResourceInternalClient, PLAssetsdNonBindingDebugClient, NSObject, PLAssetsdPhotoKitClient, PLAssetsdMigrationClient, PLAssetsdClientXPCConnection, PLAssetsdPhotoKitAddClient, PLNonBindingAssetsdPhotoKitAddClient, PLAssetsdDiagnosticsClient, PLAssetsdDebugClient, PLAssetsdClientSandboxExtensions, PLAssetsdLibraryClient, NSURL, PLAssetsdResourceWriteOnlyClient, PLNonBindingAssetsdPhotoKitClient, PLAssetsdDemoClient;
@protocol OS_dispatch_queue;

@interface PLPrimitiveAssetsdClient : NSObject {
    NSURL *_libraryURL;
    PLAssetsdClientState *_clientState;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdClientXPCConnection *_connection;
    PLAutoBindingProxyFactory *_autoBindingProxyFactory;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
    PLNonBindingAssetsdPhotoKitClient *_nonBindingPhotoKitClient;
    PLNonBindingAssetsdPhotoKitAddClient *_nonBindingPhotoKitAddClient;
    PLAssetsdLibraryClient *_libraryClient;
    PLAssetsdLibraryInternalClient *_libraryInternalClient;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdPhotoKitClient *_photoKitClient;
    PLAssetsdResourceAvailabilityClient *_resourceAvailabilityClient;
    PLAssetsdPhotoKitAddClient *_photoKitAddClient;
    PLAssetsdResourceClient *_resourceClient;
    PLAssetsdResourceWriteOnlyClient *_resourceWriteOnlyClient;
    PLAssetsdResourceInternalClient *_resourceInternalClient;
    PLAssetsdCloudClient *_cloudClient;
    PLAssetsdCloudInternalClient *_cloudInternalClient;
    PLAssetsdMigrationClient *_migrationClient;
    PLAssetsdSyncClient *_syncClient;
    PLAssetsdNotificationClient *_notificationClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdDiagnosticsClient *_diagnosticsClient;
    PLAssetsdDebugClient *_debugClient;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
    PLAssetsdNonBindingDebugClient *_nonBindingDebugClient;
}

- (id)syncClient;
- (id)resourceClient;
- (id)cloudInternalClient;
- (id)cloudClient;
- (id)debugClient;
- (id)libraryInternalClient;
- (id)libraryManagementClient;
- (void)waitUntilConnectionSendsAllMessages;
- (id)demoClient;
- (id)nonBindingDebugClient;
- (void)sendDaemonJob:(id)a0 shouldRunSerially:(BOOL)a1 replyHandler:(id /* block */)a2;
- (id)migrationClient;
- (void).cxx_destruct;
- (id)resourceInternalClient;
- (id)photoKitClient;
- (id)init;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)a0;
- (id)nonBindingPhotoKitAddClient;
- (id)libraryClient;
- (id)privacySupportClient;
- (id)resourceWriteOnlyClient;
- (id)photoKitAddClient;
- (id)nonBindingPhotoKitClient;
- (void)dealloc;
- (id)resourceAvailabilityClient;
- (id)notificationClient;
- (id)diagnosticsClient;
- (id)systemLibraryURLReadOnlyClient;
- (id)_setupClientClass:(Class)a0 proxyGetter:(SEL)a1 options:(long long)a2;
- (void)_updateLibraryStateConnectionInterrupted:(id)a0;
- (id)initWithPhotoLibraryURL:(id)a0 clientState:(id)a1;

@end
