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

- (void)toggleAlternateDetailForItemAtIndexPath:(id)a0;
- (void)viewDidAppear;
- (void)toggleExpansionForSectionModel:(id)a0;
- (void)viewWillDisappear;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)searchUIAttributes;
- (BOOL)isExpandedForSectionModel:(id)a0;
- (void)setupMonitor;
- (void)performExpansion:(BOOL)a0 withSection:(id)a1;
- (id)commandEnvironment;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)clearMonitor;
- (void)dealloc;

@end
