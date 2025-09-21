@class NSArray, NSTimer, SearchUICardSectionCollectionViewItem, NSDate, NSMutableSet, NSString;
@protocol SearchUIResultsCollectionViewSizingDelegate;

@interface SearchUIResultsCollectionViewController : SearchUICollectionViewController <SearchUIHeaderDelegate>

@property (retain, nonatomic) id monitor;
@property (retain, nonatomic) NSTimer *alternateDetailsTimer;
@property (retain, nonatomic) NSDate *alternateDetailsTimerFireDate;
@property (retain, nonatomic) SearchUICardSectionCollectionViewItem *itemShowingAlternateDetail;
@property (nonatomic) BOOL presentsAlternateDetails;
@property (retain, nonatomic) NSMutableSet *expandedCollectionSections;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *queryString;
@property (weak, nonatomic) id<SearchUIResultsCollectionViewSizingDelegate> sizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear;
- (id)commandEnvironment;
- (void)dealloc;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidAppear;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)setupMonitor;
- (void)performExpansion:(BOOL)a0 withSection:(id)a1;
- (void)clearMonitor;
- (BOOL)isExpandedForSectionModel:(id)a0;
- (void)toggleExpansionForSectionModel:(id)a0;
- (id)searchUIAttributes;
- (void).cxx_destruct;
- (void)toggleAlternateDetailForItemAtIndexPath:(id)a0;

@end
