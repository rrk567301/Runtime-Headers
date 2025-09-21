@interface SiriSharedUI.SiriSharedUIScrollablePageantView : NSView <NSScrollViewDelegate, NSGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ contentScrollView;
    void /* unknown type, empty encoding */ isScrollViewDragging;
    void /* unknown type, empty encoding */ contentPadding;
    void /* unknown type, empty encoding */ initialPillSize;
    void /* unknown type, empty encoding */ suggestionContainers;
    void /* unknown type, empty encoding */ focusedItemScale;
    void /* unknown type, empty encoding */ unfocusedItemScale;
    void /* unknown type, empty encoding */ touchDownItemScale;
    void /* unknown type, empty encoding */ continuerAppearanceAnimationDuration;
    void /* unknown type, empty encoding */ continuerTouchAnimationDuration;
    void /* unknown type, empty encoding */ initialContentOffset;
    void /* unknown type, empty encoding */ itemWidths;
    void /* unknown type, empty encoding */ focusedContinuer;
    void /* unknown type, empty encoding */ scrollCancelThreshold;
    void /* unknown type, empty encoding */ shouldUpdate;
    void /* unknown type, empty encoding */ scrollViewDidScrollFlickerPreventionThreshold;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didScrollInScrollView:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didBeginScrollInScrollView:(id)a0;
- (void)didEndScrollInScrollView:(id)a0;
- (void)handleTap:(id)a0;

@end
