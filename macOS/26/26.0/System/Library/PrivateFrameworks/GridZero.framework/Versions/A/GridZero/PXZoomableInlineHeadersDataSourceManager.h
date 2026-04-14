@class NSObject, PXUpdater, NSString, PXZoomableInlineHeadersDataSource, PXAssetsDataSourceManager, PXAssetsDataSource, PXZoomableInlineHeaderSectionInfoMetaDataStore;
@protocol OS_dispatch_queue;

@interface PXZoomableInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver> {
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    PXAssetsDataSource *_previousAssetsDataSource;
    PXZoomableInlineHeaderSectionInfoMetaDataStore *_metaDataStore;
    BOOL _isPreparingMetadataInBackground;
    NSObject<OS_dispatch_queue> *_prepareQueue;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *monthsDataSource;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSource *yearsDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsAssetsDataSourceManager:(id)a0;

- (void)setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void).cxx_destruct;
- (void)_invalidateDataSource;
- (void)_updateDataSource;
- (void)_didFinishBackgroundPreparationWithResult:(id)a0 forDataSource:(id)a1;
- (void)_prepareInBackgroundWithDataSource:(id)a0;
- (id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)a0;
- (void)_prepareQueue_prepareInBackroundWithDataSource:(id)a0;
- (id)dataSourceForLevel:(unsigned long long)a0;
- (id)initWithAssetsDataSourceManager:(id)a0 indexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;

@end
