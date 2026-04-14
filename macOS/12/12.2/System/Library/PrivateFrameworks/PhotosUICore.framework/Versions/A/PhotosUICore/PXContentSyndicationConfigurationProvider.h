@class NSString, PXContentSyndicationDataSourceManager, PHPhotoLibrary, SLHighlightCenter;

@interface PXContentSyndicationConfigurationProvider : PXObservable <PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver, SLHighlightCenterDelegate> {
    SLHighlightCenter *_socialLayerHighlightCenter;
}

@property (class, readonly) PXContentSyndicationConfigurationProvider *sharedInstance;

@property (nonatomic) BOOL contentSyndicationIsAvailable;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) BOOL showUnsavedSyndicatedContentInPhotosGrids;
@property (nonatomic) BOOL showContentSyndicationItemInSidebar;
@property (nonatomic) BOOL readyToLoadActualDataSourceManager;
@property (retain, nonatomic) PXContentSyndicationDataSourceManager *syndicationItemsDataSourceManager;
@property (retain, nonatomic) PHPhotoLibrary *syndicationPhotoLibrary;
@property (nonatomic) int systemLibraryChangeToken;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInMemories;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInFeaturedPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateEverything;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateContentSyndicationAvailability;
- (void)_updateDataSourceType;
- (void)_invalidateDataSourceManager;
- (void)_markDataSourceManagerAsReadyToLoad;
- (id)_dataSourceManagerForDataSourceType:(long long)a0;
- (void)_createDataSourceManagerIfNeeded;
- (void)_updateShowUnsavedSyndicatedContentInPhotosGrids;
- (void)setShowUnsavedSyndicatedContentInMemories:(BOOL)a0;
- (void)_updateShowUnsavedSyndicatedContentInMemories;
- (void)setShowUnsavedSyndicatedContentInFeaturedPhotos:(BOOL)a0;
- (void)_updateShowUnsavedSyndicatedContentInFeaturedPhotos;
- (void)_updateShowContentSyndicationItemInSidebar;
- (void)_startObservingSystemLibraryChanges;
- (void)_stopObservingSystemLibraryChanges;

@end
