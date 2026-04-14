@class SLHighlightCenter, NSString, PXContentSyndicationDataSourceManager, PHPhotoLibrary, PXLibraryFilterState, NSNumber;

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
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (nonatomic) int systemLibraryChangeToken;
@property (retain, nonatomic) NSNumber *testingOverride_contentSyndicationEnabled;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInMemories;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInFeaturedPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentSyndicationConfigurationProviderWithPhotoLibrary:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_startObservingSystemLibraryChanges;
- (void)_updateEverything;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_createDataSourceManagerIfNeeded;
- (id)_dataSourceManagerForDataSourceType:(long long)a0;
- (void)_invalidateDataSourceManager;
- (void)_markDataSourceManagerAsReadyToLoad;
- (void)_stopObservingSystemLibraryChanges;
- (void)_updateContentSyndicationAvailability;
- (void)_updateDataSourceType;
- (void)_updateShowContentSyndicationItemInSidebar;
- (void)_updateShowUnsavedSyndicatedContentInFeaturedPhotos;
- (void)_updateShowUnsavedSyndicatedContentInMemories;
- (void)_updateShowUnsavedSyndicatedContentInPhotosGrids;
- (void)setShowUnsavedSyndicatedContentInFeaturedPhotos:(BOOL)a0;
- (void)setShowUnsavedSyndicatedContentInMemories:(BOOL)a0;

@end
