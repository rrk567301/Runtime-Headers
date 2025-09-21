@class PXContentSyndicationDataSource;
@protocol PXDisplayAssetFetchResult;

@interface PXContentSyndicationDataSourceManager : PXCollectionsDataSourceManager

@property (readonly, nonatomic) PXContentSyndicationDataSource *dataSource;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssetsFetchResult;

+ (id)createCountsController;

- (id)imageProvider;
- (void).cxx_destruct;
- (id)assetFetchResultProvider;
- (id)createAssetsDataSourceManager;
- (id)socialLayerHighlightProvider;

@end
