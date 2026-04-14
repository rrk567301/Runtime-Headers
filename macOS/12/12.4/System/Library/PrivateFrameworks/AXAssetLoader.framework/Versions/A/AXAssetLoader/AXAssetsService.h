@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)xpcConnection;
- (id)_serviceProxy;
- (void)_destroyXPCConnection;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1;
- (void)updateAssetForPolicy:(id)a0;

@end
