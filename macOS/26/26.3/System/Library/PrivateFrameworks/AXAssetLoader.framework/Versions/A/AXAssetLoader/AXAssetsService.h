@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (id)xpcConnection;
- (id)_serviceProxy;
- (id)init;
- (void)updateAssetForPolicy:(id)a0;
- (void)_destroyXPCConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1 forceCatalogRefresh:(BOOL)a2;

@end
