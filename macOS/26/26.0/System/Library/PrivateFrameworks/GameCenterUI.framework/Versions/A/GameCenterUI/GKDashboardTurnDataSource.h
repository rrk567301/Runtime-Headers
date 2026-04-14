@class NSArray;

@interface GKDashboardTurnDataSource : GKCollectionDataSource

@property (retain, nonatomic) NSArray *matches;
@property (nonatomic) BOOL shouldShowPlay;
@property (nonatomic) BOOL shouldShowQuit;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)itemCount;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)init;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)itemForIndexPath:(id)a0;
- (double)preferredCollectionHeight;
- (id)sectionHeaderText;
- (void)setupCollectionView:(id)a0;

@end
