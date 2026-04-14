@class NSArray, NSString;

@interface AXAuditAssetManager : NSObject <AXAssetControllerObserver>

@property (class, readonly, nonatomic) AXAuditAssetManager *shared;

@property (retain, nonatomic) NSArray *_assetControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)downloadAssetsIfNecessary;

@end
