@class NSXPCListener, NSString, NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_os_log, OS_dispatch_queue;

@interface uarpRbdcClient : NSObject <UARPStandaloneCommandRequestor, NSXPCListenerDelegate> {
    NSObject<OS_os_log> *_log;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) uarpRbdcClient *sharedInstance;

@property (retain) NSObject<OS_dispatch_group> *assetSolicitationGroup;
@property (retain) NSMutableArray *solicitedAssetList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcConnectionToManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)remoteObject;
- (void)dynamicAssetSolicitationComplete:(id)a0;
- (id)solicitAssetsForTag:(id)a0 andModelNumber:(id)a1;

@end
