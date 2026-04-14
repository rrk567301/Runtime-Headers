@class CAGradientLayer, NSString, NSPointerArray, VisualScrubberViewLayout, NSMutableArray;
@protocol VisualScrubberViewControllerDataSource, VisualScrubberViewControllerDelegate, AccordionHostableExpansionRequestHandler;

@interface VisualScrubberViewController : NSViewController <NSScrubberDataSource, NSScrubberDelegate, VisualScrubberItemViewAccessibilityDelegate, AccordionHostable> {
    BOOL _shouldIgnoreTouchesWhenLoadingScrubber;
    VisualScrubberViewLayout *_scrubberLayout;
    CAGradientLayer *_leftDropOffGradient;
    CAGradientLayer *_rightDropOffGradient;
    BOOL _deferScrubberOperations;
    NSMutableArray *_deferredOperations;
    NSMutableArray *_functionBarSelectionTimestamps;
    long long _functionBarProposedIndex;
}

@property (nonatomic) unsigned long long dropOffGradientModes;
@property (retain, nonatomic) NSPointerArray *itemViews;
@property (weak, nonatomic) id<VisualScrubberViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<VisualScrubberViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AccordionHostableExpansionRequestHandler> expansionRequestHandler;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)didBeginInteractingWithScrubber:(id)a0;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (void)insertItemAtIndex:(unsigned long long)a0;
- (void)reloadItemAtIndex:(unsigned long long)a0;
- (id)_scrubber;
- (void)loadView;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (BOOL)shouldExpandWhenClickedForAccordionHost:(id)a0;
- (double)minimumWidthForAccordionHost:(id)a0;
- (void)accordionHost:(id)a0 viewWillCollapse:(BOOL)a1;
- (void)accordionHost:(id)a0 viewWillBeInserted:(BOOL)a1 viewWillExpand:(BOOL)a2;
- (void)accordionHost:(id)a0 viewWillExpand:(BOOL)a1;
- (void)accordionHost:(id)a0 viewWillBeRemoved:(BOOL)a1;
- (void)beginBatchTabManipulation;
- (void)endBatchTabManipulation;
- (id)accessibilityDescriptionForVisualScrubberItemView:(id)a0;
- (id)_setUpDropOffGradientLayerWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setSelectedIndex:(unsigned long long)a0 animate:(BOOL)a1;
- (void)_updateDropOffGradientModes;
- (void)_configureScrubberItemView:(id)a0 forUseAtIndex:(long long)a1;
- (void)_selectTabForProposedIndex;
- (void)_setScrubberIgnoresTouches:(BOOL)a0;
- (void)removeItemAtIndex:(unsigned long long)a0 selectingItemAtIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
