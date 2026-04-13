@class NSArray, NSDictionary;

@interface PXImportAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetCollections;
@property (readonly, nonatomic) NSDictionary *assetCollectionsById;
@property (readonly, nonatomic) NSDictionary *assetsMap;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfItems;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)allItems;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithAssetCollections:(id)a0 assetsMap:(id)a1;
- (id)assetCollectionForSection:(unsigned long long)a0;
- (id)assetCollectionForIdentifier:(id)a0;
- (long long)sectionForAssetCollection:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })itemIndexPathForItem:(id)a0;
- (unsigned long long)numberOfNotYetImportedItems;
- (unsigned long long)numberOfAlreadyImportedItems;
- (unsigned long long)numberOfSelectableItems;
- (BOOL)hasAlreadyImportedSection;
- (id)alreadyImportedCollection;
- (id)allSelectableItems;
- (id)allItemsUnsorted;
- (id)notYetImportedItems;
- (id)alreadyImportedItems;
- (id)itemForImportAssetUuid:(id)a0;

@end
