@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CXCallDirectoryManager : NSObject

@property (class, readonly) CXCallDirectoryManager *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *defaultConnection;
@property (retain, nonatomic) NSXPCConnection *maintenanceConnection;

- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (id)firstIdentificationEntryForEnabledExtensionSyncWithPhoneNumber:(id)a0 cacheOnly:(BOOL)a1;
- (void)dealloc;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)getExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)reloadExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)firstEnabledLiveBlockingExtensionIdentifierForPhoneNumber:(id)a0 timeout:(double)a1;
- (void)getLastUpdatedCallDirectoryInfoWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)a0 cacheOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)openSettingsWithCompletionHandler:(id /* block */)a0;
- (void)setEnabled:(BOOL)a0 forExtensionWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)synchronizeExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)compactStoreWithCompletionHandler:(id /* block */)a0;
- (void)setPrioritizedExtensionIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)fetchLiveBlockingInfoForHandle:(id)a0 timeout:(double)a1;
- (void)cleanUpLiveLookupDataWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)a0 cacheOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
