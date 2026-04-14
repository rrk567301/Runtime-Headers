@protocol GCConfigurationAssetManagementService;

@interface GCConfigurationAssetManagementServiceXPCProxy : NSObject <GCConfigurationAssetManagementServiceXPCInterface> {
    id<GCConfigurationAssetManagementService> _service;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)assetsWithReply:(id /* block */)a0;
- (id)checkForNewAssets:(BOOL)a0 forceCatalogRefresh:(BOOL)a1 reply:(id /* block */)a2;
- (void)currentAsset:(BOOL)a0 withReply:(id /* block */)a1;
- (void)lastUpdateDateWithReply:(id /* block */)a0;

@end
