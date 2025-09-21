@interface WebClipView : NSClipView {
    char _haveAdditionalClip;
    char _isScrolling;
    char _currentScrollIsBlit;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _additionalClip;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRingVisibleRect;
- (void)_immediateScrollToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (char)_canCopyOnScrollForDeltaX:(double)a0 deltaY:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })additionalClip;
- (char)currentScrollIsBlit;
- (char)hasAdditionalClip;
- (void)resetAdditionalClip;
- (void)setAdditionalClip:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
