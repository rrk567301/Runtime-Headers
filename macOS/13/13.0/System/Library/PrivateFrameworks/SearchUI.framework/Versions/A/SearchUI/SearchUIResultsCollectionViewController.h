@class NSArray, NSTimer, SearchUICardSectionCollectionViewItem, NSDate, NSString;

@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController

@property (retain, nonatomic) id monitor;
@property (retain, nonatomic) NSTimer *alternateDetailsTimer;
@property (retain, nonatomic) NSDate *alternateDetailsTimerFireDate;
@property (retain, nonatomic) SearchUICardSectionCollectionViewItem *itemShowingAlternateDetail;
@property (nonatomic) BOOL presentsAlternateDetails;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *queryString;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)commandEnvironment;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)setupMonitor;
- (void)clearMonitor;
- (void)toggleAlternateDetailForItemAtIndexPath:(id)a0;

@end
