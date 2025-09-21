@class PXPhotoLibraryLocalDefaults, NSString, PXSidebarDataContext, PXNavigationListItemDataSectionManager, NSMutableDictionary, PHAssetCollection, PHPhotoLibrary, PXOutlineDataSectionManager, NSArray, NSMapTable, PXDataSectionManager;
@protocol PXSidebarDataSourceControllerDelegate;

@interface PXSidebarDataController : NSObject <PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver, PXDisplayCollectionFetcher> {
    PXOutlineDataSectionManager *_rootDataSectionManager;
    NSMutableDictionary *_dataSectionManagers;
    NSMutableDictionary *_dataSectionObjectsByItemIdentifier;
    NSMutableDictionary *_dataSectionObjectsByCollectionIdentifier;
    NSArray *_arrangedObjectIdentifiers;
}

@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (retain, nonatomic) NSMapTable *requestDetailsBySidebarImageRequestID;
@property (readonly, nonatomic) PXDataSectionManager *mediaTypesSectionManager;
@property (readonly, nonatomic) PXNavigationListItemDataSectionManager *mediaTypesItemManager;
@property (readonly, nonatomic) PXSidebarDataContext *context;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) PHAssetCollection *pickerAllPhotosVirtualCollection;
@property (weak, nonatomic) id<PXSidebarDataSourceControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isChangeProcessingPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSectionManagerForCollectionList:(id)a0 context:(id)a1 topLevelIdentifier:(id)a2;
+ (id)albumsDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)bookmarksDataSectionManagerForLibrary:(id)a0;
+ (id)collectionsDataSectionManagerForLibrary:(id)a0 mediaTypesItemManager:(id)a1 context:(id)a2;
+ (id)collectionsItemDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)dataSectionManagerForCollection:(id)a0 context:(id)a1;
+ (id)dataSectionManagerForCollection:(id)a0 context:(id)a1 enablementItem:(long long)a2;
+ (id)dataSectionManagerForGroupCollectionList:(id)a0 context:(id)a1;
+ (id)dataSectionManagerForTransientCollection:(id)a0 context:(id)a1;
+ (id)devicesDataSectionManagerForLibrary:(id)a0;
+ (id)favoritesDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)libraryDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)libraryItemDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)mediaTypesDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)projectsDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)recentlySavedDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)sharedLibrarySuggestionsDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)sharingDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)trashDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)unableToUploadDataSectionManagerForLibrary:(id)a0 context:(id)a1;
+ (id)utilitiesDataSectionManagerForLibrary:(id)a0 context:(id)a1;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)itemForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isItemExpanded:(id)a0;
- (id)child:(long long)a0 ofItem:(id)a1;
- (long long)numberOfChildrenOfItem:(id)a0;
- (void)cancelImageRequest:(long long)a0;
- (id)_childDataSectionManagerForListItem:(id)a0;
- (void)_removeDataSectionManagerForKey:(id)a0;
- (void)_setDataSectionManager:(id)a0 forKey:(id)a1;
- (void)_updateDataSectionForRemovedItems:(id)a0;
- (void)_updateMediaTypesItemManager;
- (void)_updateSectionObjectLookupDataForChildItem:(id)a0;
- (void)appearanceDidChange;
- (id)beginRequestForMediaProvider:(id)a0 mediaRequestIDs:(id)a1;
- (void)cancelRequestDetails:(id)a0;
- (id)childDataSectionForItem:(id)a0;
- (id)childrenOfListItem:(id)a0;
- (id)dataSectionManagerForItem:(id)a0;
- (void)didNavigateToListItem:(id)a0;
- (id)fetchCollectionsInDisplayCollectionList:(id)a0;
- (id)infoForItem:(id)a0 childIndex:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0 context:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 context:(id)a1 options:(unsigned long long)a2 pickerAllPhotosVirtualCollection:(id)a3;
- (id)itemsForCollectionIdentifier:(id)a0;
- (id)makeSectionManagers;
- (void)markListItemAsRead:(id)a0;
- (BOOL)moveGroupItem:(id)a0 afterGroupItem:(id)a1;
- (id)outlineDataSectionManager:(id)a0 arrangedSectionContent:(id)a1;
- (long long)requestImageForItem:(id)a0 parentItem:(id)a1 completion:(id /* block */)a2;
- (void)setChangeProcessingPaused:(BOOL)a0 forReason:(id)a1;
- (void)setExpanded:(BOOL)a0 forItem:(id)a1;

@end
