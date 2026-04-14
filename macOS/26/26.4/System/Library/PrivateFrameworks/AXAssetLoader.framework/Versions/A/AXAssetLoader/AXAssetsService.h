@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (id)xpcConnection;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1 forceCatalogRefresh:(BOOL)a2;
- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (id)init;
- (void)dealloc;
- (void)updateAssetForPolicy:(id)a0;
- (id)_serviceProxy;

@end
