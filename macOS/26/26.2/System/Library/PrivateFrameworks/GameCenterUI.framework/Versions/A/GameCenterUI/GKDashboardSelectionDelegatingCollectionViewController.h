@protocol NSUICollectionViewDelegate;

@interface GKDashboardSelectionDelegatingCollectionViewController : GKDashboardCollectionViewController

@property (weak, nonatomic) id<NSUICollectionViewDelegate> selectionDelegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
