@class PLAssetsdClient, PLAssetsdResourceInternalClient;

@interface PLCameraDeferredProcessingCoordinator : NSObject {
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetdClient:(id)a0;

@end
