@class NSXPCListener, NSString, NSURL, NSMutableSet, _NSPersistentUIStoreDirectoryMapper;

@interface _NSPersistentUIStorageServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    _NSPersistentUIStoreDirectoryMapper *_directoryMapper;
    NSMutableSet *_connectionQueues;
}

@property (class, readonly) _NSPersistentUIStorageServiceListener *sharedListener;

@property (readonly, copy) NSURL *savedApplicationStateDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (void)_addConnectionQueue:(id)a0;
- (void)_removeConnectionQueue:(id)a0;
- (void)flushAllServicesImmediately;
- (id)persistentStateDirectoryURLForASN:(struct __LSASN { } *)a0;
- (BOOL)setUpConnection:(id)a0;

@end
