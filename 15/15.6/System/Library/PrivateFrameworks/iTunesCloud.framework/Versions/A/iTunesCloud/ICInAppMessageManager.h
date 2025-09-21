@class NSXPCConnection, NSString, ICUserIdentityStore, NSOperationQueue, ICInAppMessageStore, NSObject, NSXPCListener, NSMutableSet;
@protocol OS_dispatch_queue, NSCopying;

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver> {
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_downloadOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICUserIdentityStore *_identityStore;
    char _isSystemService;
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

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_init;
- (void)_addConnection:(id)a0;
- (void)_removeConnection:(id)a0;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)removeMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (char)_privacyAcknowledgementRequired;
- (void)_addMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)_checkForMessageResourcesNeedingDownloadForcingIfNecessary:(char)a0;
- (void)_downloadResourcesForMessageWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_handleICInAppMessagesDidChangeDistributedNotification:(id)a0;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)_loadConfigurationWithCompletion:(id /* block */)a0;
- (void)_performCacheConsistencyCheck;
- (void)_performSyncRetryIfPending:(char)a0;
- (void)_performSyncWithCompletion:(id /* block */)a0;
- (void)_processSyncResponse:(id)a0 completion:(id /* block */)a1;
- (void)_removeAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_removeMessageEntryWithIdentifier:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)_resourceCacheDirectoryPath;
- (void)_schedulePeriodicUpdate;
- (id)_storeRequestContext;
- (void)_updateShouldDownloadResources:(char)a0 onMessageWithIdentifier:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)_xpcClientConnection;
- (void)addMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)addMessageEntryFromAMSDialogRequest:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)allMessageEntriesWithCompletion:(id /* block */)a0;
- (void)clearCachedResourcesForMessageWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)downloadResourcesForMessageWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)flushEventsWithCompletion:(id /* block */)a0;
- (void)getAllMetadataForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getAllMetadataForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)getGlobalPropertyForKey:(id)a0 completion:(id /* block */)a1;
- (void)getMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getPropertyForKey:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithMessageStore:(id)a0 identityStore:(id)a1;
- (void)messageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)messageEntriesForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)messageEntryWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeApplicationBadgeForBundleIdentifier:(id)a0 fromPresentedMessageEntry:(id)a1 completion:(id /* block */)a2;
- (void)removeMessageEntryWithIdentifier:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)reportEventForMessageIdentifier:(id)a0 withParams:(id)a1 completion:(id /* block */)a2;
- (void)reportEventForMessageIdentifier:(id)a0 withParams:(id)a1 flushImmediately:(char)a2 completion:(id /* block */)a3;
- (void)resetMessagesWithCompletion:(id /* block */)a0;
- (void)setGlobalProperty:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setProperty:(id)a0 forKey:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)startSystemService;
- (void)stopSystemService;
- (void)syncMessagesWithCompletion:(id /* block */)a0;
- (void)updateMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)updateMetadata:(id)a0 messageIdentifier:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;

@end
