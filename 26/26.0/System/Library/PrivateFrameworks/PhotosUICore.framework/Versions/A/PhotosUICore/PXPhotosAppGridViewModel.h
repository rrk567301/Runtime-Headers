@class PXContentPrivacyController, NSString, NSArray, NSHashTable, PXUpdater, PXSearchQueryMatchInfo, PHPhotoLibrary, NSDictionary, PXPhotosViewModel, PXSharedLibraryStatusProvider, PXLibraryFilterState, PXPhotosViewOptionsModel;
@protocol PXPhotosAppSpecificGridDelegate, PXMemoryAssetsActionFactory;

@interface PXPhotosAppGridViewModel : PXObservable <PXChangeObserver, PXPhotosViewModelHelper> {
    NSHashTable *_internalMenuProducers;
    BOOL _didRegisterForSWYDefaultsChanges;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (weak, nonatomic) id<PXPhotosAppSpecificGridDelegate> photosAppGridDelegate;
@property (retain, nonatomic) id currentDataSourceContainer;
@property (readonly, nonatomic) BOOL alwaysIncludeSharedWithYouAssets;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, weak, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXPhotosViewOptionsModel *viewOptionsModel;
@property (readonly, nonatomic) BOOL hidesViewOptionsToolbar;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly, nonatomic) PXContentPrivacyController *contentPrivacyController;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (retain, nonatomic) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (retain, nonatomic) NSDictionary *searchContextualVideoThumbnailIdentifiers;
@property (readonly, nonatomic) NSArray *internalMenuProducers;
@property (retain, nonatomic) id swift_associatedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) unsigned long long dateType;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) long long authenticationType;
@property (readonly, nonatomic) BOOL wantsContentUnavailableUnlockButtonVisible;

- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)init;
- (void)didPerformChanges;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)swift_reverseSortOrderDidChange;
- (id)initialFilterStateForViewModel:(id)a0;
- (void)unregisterInternalMenuProducer:(id)a0;
- (id)_initialLibraryFilterStateForConfiguration:(id)a0;
- (void)_invalidateCurrentDataSourceContainer;
- (void)_invalidateLibraryFilterState;
- (void)_invalidatePersonContainerProperties;
- (void)_updateContentFilterStateForSharedWithYouObservationChange;
- (void)_updateCurrentDataSourceContainer;
- (void)_updateLibraryFilterState;
- (void)_updatePersonContainerProperties;
- (void)_updateSortOrder;
- (void)applySpecManagerOptions:(id)a0;
- (id)createGridActionManagerForViewModel:(id)a0;
- (id)createInteractionHelperWithInteraction:(id)a0 viewModel:(id)a1;
- (id)initWithConfiguration:(id)a0 viewModel:(id)a1;
- (void)initializationWillFinishWithConfiguration:(id)a0;
- (BOOL)initializeReverseSortOrder;
- (void)registerInternalMenuProducer:(id)a0;
- (BOOL)swift_initializeReverseSortOrder;
- (void)swift_viewModelDidChange:(id)a0;
- (void)viewModelDidChange:(id)a0;

@end
