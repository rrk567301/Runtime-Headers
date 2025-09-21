@class PXPhotoKitCollectionsDataSource, PHCollectionList, PXPhotoKitCollectionsDataSourceManager, NSString, NSMutableDictionary, NSMapTable;

@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXChangeObserver, PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver> {
    NSMutableDictionary *_childDataSectionManagers;
    NSMutableDictionary *_childDataSectionIndexes;
    NSMapTable *_parentListItems;
    NSMutableDictionary *_collectionsByPrivacyControllerId;
    NSMutableDictionary *_privacyControllersById;
}

@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *collectionsDataSource;
@property (readonly, nonatomic) char skipAssetCountFetches;
@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) char allowsEmptyDataSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeCollectionsDataSourceManagerForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)collectionsDataSourceIfExisting;
- (void)startBackgroundFetchingIfNeeded;
- (id)_changeDetailsForItemAtIndex:(long long)a0 childDataSection:(id)a1 expanding:(char)a2;
- (void)_requestParentForListItem:(id)a0 hintIndex:(long long)a1 resultHandler:(id /* block */)a2 recursionHandler:(id /* block */)a3;
- (id)auxiliaryObjectForKey:(id)a0 dataSectionObject:(id)a1 hintIndex:(long long)a2;
- (void)collapseListItem:(id)a0 hintIndex:(long long)a1;
- (id)createDataSection;
- (void)expandListItem:(id)a0 hintIndex:(long long)a1;
- (id)initWithChildDataSectionManagers:(id)a0;
- (id)initWithCollectionList:(id)a0;
- (char)isChangeProcessingPaused;
- (void)pauseBackgroundFetching;
- (void)setChangeProcessingPaused:(char)a0 forReason:(id)a1;

@end
