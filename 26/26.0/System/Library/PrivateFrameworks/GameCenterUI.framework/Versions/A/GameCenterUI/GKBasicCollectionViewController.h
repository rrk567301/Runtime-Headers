@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController

@property (retain, nonatomic) NSArray *metricsForSections;
@property (retain, nonatomic) GKCollectionViewDataSource *initialDataSource;
@property (retain, nonatomic) id target;

- (void)configureDataSource;
- (void)setDataSource:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_gkPresentationIdentifier;
- (id)initWithDataSource:(id)a0 title:(id)a1;

@end
