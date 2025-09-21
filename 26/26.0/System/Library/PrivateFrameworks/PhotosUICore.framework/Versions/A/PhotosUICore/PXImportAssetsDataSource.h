@class NSArray, NSDictionary;

@interface PXImportAssetsDataSource : PXAssetsDataSource {
    BOOL _startsAtEnd;
}

@property (readonly, nonatomic) NSArray *assetCollections;
@property (readonly, nonatomic) NSDictionary *assetCollectionsById;
@property (readonly, nonatomic) NSDictionary *assetsMap;

- (long long)numberOfItemsInSection:(long long)a0;
- (unsigned long long)numberOfItems;
- (long long)numberOfSections;
- (id)allItems;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)startsAtEnd;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)allItemsUnsorted;
- (id)allSelectableItems;
- (id)alreadyImportedCollection;
- (id)alreadyImportedItems;
- (id)assetCollectionForIdentifier:(id)a0;
- (id)assetCollectionForSection:(unsigned long long)a0;
- (BOOL)hasAlreadyImportedSection;
- (id)initWithAssetCollections:(id)a0 assetsMap:(id)a1;
- (id)initWithAssetCollections:(id)a0 assetsMap:(id)a1 startsAtEnd:(BOOL)a2;
- (id)itemForImportAssetUuid:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })itemIndexPathForItem:(id)a0;
- (id)notYetImportedItems;
- (unsigned long long)numberOfAlreadyImportedItems;
- (unsigned long long)numberOfNotYetImportedItems;
- (unsigned long long)numberOfSelectableItems;
- (long long)sectionForAssetCollection:(id)a0;

@end
