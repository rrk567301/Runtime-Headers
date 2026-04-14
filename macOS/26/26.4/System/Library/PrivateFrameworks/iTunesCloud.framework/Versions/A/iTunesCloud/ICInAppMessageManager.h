@class NSXPCConnection, NSString, ICUserIdentityStore, NSOperationQueue, ICInAppMessageStore, NSObject, NSXPCListener, NSMutableSet;
@protocol OS_dispatch_queue, NSCopying;

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver> {
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_downloadOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICUserIdentityStore *_identityStore;
    BOOL _isSystemService;
    NSString *_foregroundApplicationIdentifier;
    id<NSCopying> _musicPrivacyObserverToken;
    id<NSCopying> _fitnessPrivacyObserverToken;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
}

@property (class, readonly, nonatomic) ICInAppMessageManager *sharedManager;

@property (readonly, nonatomic) ICInAppMessageStore *_unsafeMessageStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addConnection:(id)a0;
- (id)_init;
- (void)syncMessagesWithCompletion:(id /* block */)a0;
- (void)_performSyncRetryIfPending:(BOOL)a0;
- (void)updateMetadata:(id)a0 messageIdentifier:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_loadConfigurationWithCompletion:(id /* block */)a0;
- (void)updateMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)resetMessagesWithCompletion:(id /* block */)a0;
- (void)messageEntriesForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_processSyncResponse:(id)a0 completion:(id /* block */)a1;
- (void)startSystemService;
- (void)_schedulePeriodicUpdate;
- (void)_checkForMessageResourcesNeedingDownloadForcingIfNecessary:(BOOL)a0;
- (void)downloadResourcesForMessageWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_updateShouldDownloadResources:(BOOL)a0 onMessageWithIdentifier:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)setGlobalProperty:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)_removeAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getPropertyForKey:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_performSyncWithCompletion:(id /* block */)a0;
- (void)getMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)_handleICInAppMessagesDidChangeDistributedNotification:(id)a0;
- (id)_xpcClientConnection;
- (void)_removeMessageEntryWithIdentifier:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getAllMetadataForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_privacyAcknowledgementRequired;
- (void)removeApplicationBadgeForBundleIdentifier:(id)a0 fromPresentedMessageEntry:(id)a1 completion:(id /* block */)a2;
- (void)allMessageEntriesWithCompletion:(id /* block */)a0;
- (void)setProperty:(id)a0 forKey:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (id)initWithMessageStore:(id)a0 identityStore:(id)a1;
- (void)addMessageEntry:(id)a0 completion:(id /* block */)a1;
- (id)_resourceCacheDirectoryPath;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_supportedInterfaceForXPCConnection;
- (void)reportEventForMessageIdentifier:(id)a0 withParams:(id)a1 flushImmediately:(BOOL)a2 completion:(id /* block */)a3;
- (void)messageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_removeConnection:(id)a0;
- (void)messageEntryWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)addMessageEntryFromAMSDialogRequest:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_addMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)reportEventForMessageIdentifier:(id)a0 withParams:(id)a1 completion:(id /* block */)a2;
- (void)_downloadResourcesForMessageWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)clearCachedResourcesForMessageWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)removeMessageEntryWithIdentifier:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getAllMetadataForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)flushEventsWithCompletion:(id /* block */)a0;
- (void)_performCacheConsistencyCheck;
- (void)getGlobalPropertyForKey:(id)a0 completion:(id /* block */)a1;
- (id)_storeRequestContext;
- (void)stopSystemService;

@end
