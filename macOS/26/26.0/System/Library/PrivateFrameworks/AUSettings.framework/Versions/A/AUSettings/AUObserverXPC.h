@class NSXPCListener, NSString, NSXPCConnection, NSUUID, NSObject;
@protocol OS_dispatch_queue, AUObserverXPCClient;

@interface AUObserverXPC : NSObject <NSXPCListenerDelegate, AUObserverXPCClient> {
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSUUID *_uuid;
    id<AUObserverXPCClient> _registeredClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcConnectionToDaemon;

- (id)remoteObject;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void)stagingCompleteForAccessoryID:(id)a0 assetID:(id)a1 status:(unsigned long long)a2;
- (void)unregisterClient;
- (void)registerClient:(id)a0;
- (void)stopMonitoring;
- (void)removeAccessoryID:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)firmwareUpdateProgressForAccessoryID:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)settingsChangedForSerialNumber:(id)a0;
- (void)addAccessoryID:(id)a0 assetID:(id)a1;
- (void)clearDropboxForModelNumber:(id)a0 withFusing:(id)a1;

@end
