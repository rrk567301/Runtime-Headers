@class NSString, PXContentSyndicationPhotoKitDataSource, PHPhotoLibrary;
@protocol PXContentSyndicationAssetFetchResultProvider, PXContentSyndicationSocialLayerHighlightProvider, PXUIImageProvider;

@interface PXContentSyndicationPhotoKitDataSourceManager : PXContentSyndicationDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    id<PXContentSyndicationAssetFetchResultProvider> _assetFetchResultProvider;
    id<PXUIImageProvider> _imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> _highlightProvider;
}

@property (readonly, nonatomic) PXContentSyndicationPhotoKitDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCountsController;

- (id)init;
- (void).cxx_destruct;
- (id)imageProvider;
- (id)initWithPhotoLibrary:(id)a0;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (id)createInitialDataSource;
- (id)allAssetsFetchResult;
- (id)assetFetchResultProvider;
- (id)socialLayerHighlightProvider;
- (id)createAssetsDataSourceManager;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;

@end
