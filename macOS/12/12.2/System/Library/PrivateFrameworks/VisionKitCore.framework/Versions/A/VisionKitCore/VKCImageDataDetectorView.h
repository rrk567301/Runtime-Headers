@class NSArray, NSMutableSet, NSString;
@protocol VKCImageDataDetectorViewDelegate;

@interface VKCImageDataDetectorView : VKCImageBaseOverlayView <VKCDataDetectorElementViewDelegate, VKCMRCHighlightViewDelegate>

@property (retain, nonatomic) NSArray *allElements;
@property (retain, nonatomic) NSArray *unfilteredElements;
@property (retain, nonatomic) NSArray *displayedElements;
@property (retain, nonatomic) NSMutableSet *displayedElementViews;
@property (readonly, nonatomic) BOOL needsElementFrameUpdate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsUsedToCalculateElementFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRectUsedToCalculateElementFrames;
@property (weak, nonatomic) id<VKCImageDataDetectorViewDelegate> delegate;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL allowLongPressDDActivationOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setRecognitionResult:(id)a0;
- (void)didMoveToSuperview;
- (id)previewForDataDetectorElementView:(id)a0;
- (void)setHighlightSelectableItems:(BOOL)a0 animated:(BOOL)a1;
- (void)setCustomAnalyticsIdentifier:(id)a0;
- (void)updateDisplayedElements;
- (void)updateAllElementViewFramesIfNecessary;
- (void)loadDataDetectorViewsFromDisplayedElements;
- (BOOL)shouldFilterElementForSpecialCase:(id)a0;
- (void)updateAllElementViewFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDataDetectorElement:(id)a0;
- (void)dataDetectorElementView:(id)a0 analyticsEventOccured:(id)a1;
- (id)viewSpaceQuadsForDataDetectorElement:(id)a0;

@end
