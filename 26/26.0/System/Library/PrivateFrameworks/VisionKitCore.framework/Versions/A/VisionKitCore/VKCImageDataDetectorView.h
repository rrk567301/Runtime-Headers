@class NSArray, NSString, NSMutableSet, NSMutableArray;
@protocol VKCImageDataDetectorViewDelegate;

@interface VKCImageDataDetectorView : VKCImageBaseOverlayView <VKCDataDetectorElementViewDelegate>

@property (retain, nonatomic) NSMutableArray *_allElements;
@property (retain, nonatomic) NSMutableArray *_unfilteredElements;
@property (retain, nonatomic) NSMutableArray *_displayedElements;
@property (retain, nonatomic) NSMutableSet *_displayedElementViews;
@property (readonly, nonatomic) BOOL needsElementFrameUpdate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsUsedToCalculateElementFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRectUsedToCalculateElementFrames;
@property (weak, nonatomic) id<VKCImageDataDetectorViewDelegate> delegate;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, nonatomic) NSArray *displayedElements;
@property (readonly, nonatomic) NSArray *displayedElementViews;
@property (readonly, nonatomic) NSArray *unfilteredElements;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL allowLongPressDDActivationOnly;
@property (nonatomic) BOOL allowHitTestingForIgnoredElementViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)previewForDataDetectorElementView:(id)a0;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)setRecognitionResult:(id)a0;
- (void)_appendMRCAsyncElement:(id)a0;
- (void)appendMRCAsyncElement:(id)a0;
- (id)closestElementToPoint:(struct CGPoint { double x0; double x1; })a0 maxDistance:(double)a1;
- (void)dataDetectorElementView:(id)a0 analyticsEventOccured:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDataDetectorElement:(id)a0;
- (void)loadDataDetectorViewsFromDisplayedElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewImageBoundsForDataDetectorElementView:(id)a0;
- (id)previewImageForDataDetectorElementView:(id)a0;
- (void)setCustomAnalyticsIdentifier:(id)a0;
- (void)setHighlightSelectableItems:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldFilterElementForSpecialCase:(id)a0;
- (void)updateAllElementViewFrames;
- (void)updateAllElementViewFramesIfNecessary;
- (void)updateDisplayedElements;
- (id)viewSpaceQuadsForDataDetectorElement:(id)a0;

@end
