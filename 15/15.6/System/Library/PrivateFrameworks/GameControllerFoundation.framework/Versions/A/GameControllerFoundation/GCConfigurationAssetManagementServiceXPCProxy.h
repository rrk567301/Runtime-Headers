@protocol GCConfigurationAssetManagementService;

@interface GCConfigurationAssetManagementServiceXPCProxy : NSObject <GCConfigurationAssetManagementServiceXPCInterface> {
    id<GCConfigurationAssetManagementService> _service;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (void)assetsWithReply:(id /* block */)a0;
- (id)checkForNewAssets:(char)a0 forceCatalogRefresh:(char)a1 reply:(id /* block */)a2;
- (void)currentAsset:(char)a0 withReply:(id /* block */)a1;
- (void)lastUpdateDateWithReply:(id /* block */)a0;

@end
