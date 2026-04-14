@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (void)dealloc;
- (id)xpcConnection;
- (id)init;
- (id)_serviceProxy;
- (void)updateAssetForPolicy:(id)a0;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1 forceCatalogRefresh:(BOOL)a2;
- (void)_destroyXPCConnection;
- (void).cxx_destruct;

@end
