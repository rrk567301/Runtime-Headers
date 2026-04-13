@class NSView, NSString, NSArray, VKCImageAnalysisBaseView, VKCVisualSearchCornerView, VKAnalyticsProcessor, VKAnalyticsSessionAccumulator, NSImageView, VKImageAnalysis;
@protocol VKInteractionAnalyticsDelegate, VKImageAnalysisOverlayViewDelegate;

@interface VKImageAnalysisOverlayView : NSView <VKCImageAnalysisBaseViewDelegate, VKCVisualSearchCornerViewDelegate>

@property (retain, nonatomic) NSArray *displayedOverlayViewConstraints;
@property (retain, nonatomic) VKCImageAnalysisBaseView *baseView;
@property (retain, nonatomic) VKCVisualSearchCornerView *visualSearchCornerButtonView;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL isSettingAnalysis;
@property (weak, nonatomic) id<VKInteractionAnalyticsDelegate> _analyticsDelegate;
@property (nonatomic) BOOL didInteractWithVisualSearchItem;
@property (retain, nonatomic) VKAnalyticsProcessor *analyticsProcessor;
@property (retain, nonatomic) VKAnalyticsSessionAccumulator *analyticsSession;
@property (nonatomic) unsigned long long analyticsTimeoutIndex;
@property (weak, nonatomic) id<VKImageAnalysisOverlayViewDelegate> delegate;
@property (weak, nonatomic) NSImageView *trackingImageView;
@property (nonatomic) unsigned long long activeInteractionTypes;
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (retain, nonatomic) VKImageAnalysis *analysis;
@property (nonatomic) BOOL wantsAutomaticContentsRectCalculation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentsRect;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, nonatomic) NSView *visualSearchCornerView;
@property (nonatomic) BOOL didAddVisualSearchCornerView;
@property (nonatomic) BOOL automaticallyShowVisualSearchResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingHasActiveTextSelection;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resetSelection;
- (BOOL)_performTextActionWithSelector:(SEL)a0;
- (BOOL)interactableItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)triggerTapToRadar;
- (id)generatePlistsForScalingAndAlignment;
- (void)generateVisualSearchResultForItems:(id)a0 queryID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)closeAndSendCurrentAnalyticsSession;
- (void)_automaticallyShowVisualSearchResultsIfApplicable;
- (BOOL)analysisContainsTextAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateForAnalyticsVisualSearchEventIfNecessary:(id)a0;
- (void)addEventToAnalyticsSession:(id)a0;
- (void)beginNewAnalyticsSessionIfNecessary;
- (void)highlightMatchesForStrings:(id)a0 animated:(BOOL)a1;
- (id)previewForDataDetectorElementView:(id)a0;
- (id)viewForImageSnapshotForBaseView:(id)a0;
- (BOOL)topLevelImplementsContentsRectDelegateForBaseView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForImageRecognitionBaseView:(id)a0;
- (void)baseOverlayView:(id)a0 didUpdateToNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)baseOverlayView:(id)a0 shouldBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a1 withTypes:(unsigned long long)a2;
- (void)baseOverlayView:(id)a0 didFinishTransitionToNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)baseOverlayView:(id)a0 shouldHandleKeyDownEvent:(id)a1;
- (BOOL)baseOverlayView:(id)a0 shouldShowMenuForEvent:(id)a1;
- (void)baseOverlayView:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)baseOverlayViewDismissVisualSearchController:(id)a0;
- (void)baseOverlayView:(id)a0 analyticsEventDidOccur:(id)a1;
- (void)visualSearchCornerView:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)visualSearchCornerViewDidDismissVisualSearchController:(id)a0;
- (void)visualSearchCornerView:(id)a0 analyticsEventDidOccur:(id)a1;
- (void)highlightMatchesForString:(id)a0 animated:(BOOL)a1;
- (void)clearMatchedHighlightsIfNecessaryAnimated:(BOOL)a0;

@end
