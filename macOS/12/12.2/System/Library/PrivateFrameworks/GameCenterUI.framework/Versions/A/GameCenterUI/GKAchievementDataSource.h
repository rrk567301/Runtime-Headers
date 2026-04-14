@class NSArray, GKGameRecord;

@interface GKAchievementDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *achievements;
@property (retain, nonatomic) NSArray *localAchievements;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } collectionLayoutInsets;

- (long long)itemCount;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)a0;
- (double)preferredCollectionHeight;
- (id)initWithGameRecord:(id)a0;
- (id)heightMultipliersForSizeCategories;

@end
