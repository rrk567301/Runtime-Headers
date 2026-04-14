@class NSArray, NSImage, NSTrackingArea, NSNumber, NSStackView;

@interface ASRatingControl : NSView {
    BOOL _useGlassDesign;
    BOOL _needsDisplayForSubmittedRating;
    NSStackView *_horizontalStack;
}

@property (class, readonly, nonatomic) NSImage *starHollow;
@property (class, readonly, nonatomic) NSImage *starFilled;
@property (class, readonly, nonatomic) long long starCount;

@property (retain, nonatomic) NSNumber *prospectiveRating;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) BOOL isMouseDown;
@property (copy, nonatomic) NSArray *cachedAccessibilityChildren;
@property (retain, nonatomic) NSNumber *rating;
@property (copy, nonatomic) id /* block */ didChangeCallback;

+ (id)starActive;
+ (id)starActivePressed;
+ (id)starFilledPressed;
+ (id)starHollowPressed;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDragged:(id)a0;
- (void)displayIfNeeded;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)_configureConstraints;
- (id)accessibilityChildren;
- (void)mouseMoved:(id)a0;
- (void)_configureArrangedSubviewsForSubmittedRating;
- (void)_didClickStarButton:(id)a0;
- (id)_makeStackViewSpacer;
- (id)initWithRating:(id)a0 useGlassDesign:(BOOL)a1;
- (id)inputRatingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)makeAccessibilityChildForStarAtIndex:(long long)a0;
- (void)sendRatingChange;
- (void)setNeedsDisplayForSubmittedRatingState:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })starFrameAtIndex:(long long)a0;

@end
