@class NSArray;

@interface PXStaticDisplayAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) long long sectionContent;
@property (readonly, nonatomic) NSArray *assetCollectionBySection;
@property (readonly, nonatomic) NSArray *assetsBySection;
@property (readonly, nonatomic) NSArray *curatedAssetsBySection;
@property (readonly, nonatomic) NSArray *keyAssetsBySection;
@property (readonly, nonatomic) NSArray *exposedAssetsBySection;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)initWithDisplayAssetFetchResults:(id)a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)curatedAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (char)hasCurationForAssetCollection:(id)a0;
- (id)initWithAssetCollectionBySection:(id)a0 assetsBySection:(id)a1 curatedAssetsBySection:(id)a2 keyAssetsBySection:(id)a3 sectionContent:(long long)a4;
- (id)keyAssetsForAssetCollection:(id)a0;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfCuratedItemsInAssetCollection:(id)a0;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)a0;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)uncuratedAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
