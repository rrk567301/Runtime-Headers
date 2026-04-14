@class NSArray;

@interface GKDashboardTurnDataSource : GKCollectionDataSource

@property (retain, nonatomic) NSArray *matches;
@property (nonatomic) BOOL shouldShowPlay;
@property (nonatomic) BOOL shouldShowQuit;

- (id)init;
- (long long)itemCount;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)itemForIndexPath:(id)a0;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)a0;
- (double)preferredCollectionHeight;

@end
