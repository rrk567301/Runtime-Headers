@class NSArray, NSDictionary;

@interface PXImportAssetsDataSource : PXAssetsDataSource {
    char _startsAtEnd;
}

@property (readonly, nonatomic) NSArray *assetCollections;
@property (readonly, nonatomic) NSDictionary *assetCollectionsById;
@property (readonly, nonatomic) NSDictionary *assetsMap;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)allItems;
- (char)startsAtEnd;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)allItemsUnsorted;
- (id)allSelectableItems;
- (id)alreadyImportedCollection;
- (id)alreadyImportedItems;
- (id)assetCollectionForIdentifier:(id)a0;
- (id)assetCollectionForSection:(unsigned long long)a0;
- (char)hasAlreadyImportedSection;
- (id)initWithAssetCollections:(id)a0 assetsMap:(id)a1;
- (id)initWithAssetCollections:(id)a0 assetsMap:(id)a1 startsAtEnd:(char)a2;
- (id)itemForImportAssetUuid:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })itemIndexPathForItem:(id)a0;
- (id)notYetImportedItems;
- (unsigned long long)numberOfAlreadyImportedItems;
- (unsigned long long)numberOfNotYetImportedItems;
- (unsigned long long)numberOfSelectableItems;
- (long long)sectionForAssetCollection:(id)a0;

@end
