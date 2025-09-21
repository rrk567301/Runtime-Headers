@class NSObject, PXUpdater, NSString, PXZoomableInlineHeadersDataSource, PXAssetsDataSourceManager, PXAssetsDataSource, PXZoomableInlineHeaderSectionInfoMetaDataStore;
@protocol OS_dispatch_queue;

@interface PXZoomableInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver> {
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    PXAssetsDataSource *_previousAssetsDataSource;
    PXZoomableInlineHeaderSectionInfoMetaDataStore *_metaDataStore;
    char _isPreparingMetadataInBackground;
    NSObject<OS_dispatch_queue> *_prepareQueue;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *monthsDataSource;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *yearsDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsAssetsDataSourceManager:(id)a0;

- (void).cxx_destruct;
- (void)setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (void)didPerformChanges;
- (void)_didFinishBackgroundPreparationWithResult:(id)a0 forDataSource:(id)a1;
- (id)_fetchResultForDataSource:(id)a0;
- (void)_invalidateDataSource;
- (void)_prepareInBackgroundWithDataSource:(id)a0;
- (id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)a0;
- (void)_prepareQueue_prepareInBackroundWithDataSource:(id)a0;
- (void)_updateDataSource;
- (id)dataSourceForLevel:(unsigned long long)a0;

@end
