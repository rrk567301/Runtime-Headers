@class NSString, PXCollectionsDataSourceManager, PXContentSyndicationMockSharedAlbumsDataSource;
@protocol PXContentSyndicationAssetFetchResultProvider, PXContentSyndicationSocialLayerHighlightProvider, PXUIImageProvider;

@interface PXContentSyndicationMockSharedAlbumsDataSourceManager : PXContentSyndicationDataSourceManager <PXCollectionsDataSourceManagerObserver> {
    id<PXContentSyndicationAssetFetchResultProvider> _assetFetchResultProvider;
    id<PXUIImageProvider> _imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> _highlightProvider;
}

@property (retain, nonatomic) PXCollectionsDataSourceManager *sharedAlbumsDataSourceManager;
@property (readonly, nonatomic) PXContentSyndicationMockSharedAlbumsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCountsController;

- (void).cxx_destruct;
- (id)imageProvider;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)createInitialDataSource;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)socialLayerHighlightProvider;
- (id)createAssetsDataSourceManager;
- (void)_handleDataSourceChange;

@end
