@class NSTrackingArea;

@interface NSLegacyScrollerImp : NSScrollerImp {
    NSTrackingArea *contentViewTrackingArea;
    double _uiStateTransitionProgress;
}

- (void)dealloc;
- (id)init;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (long long)scrollerStyle;
- (void)setUiStateTransitionProgress:(double)a0;
- (double)uiStateTransitionProgress;
- (void)setTrackAlpha:(double)a0;
- (void)setKnobAlpha:(double)a0;
- (double)trackSideInset;
- (double)knobEndInset;
- (double)_knobRolloverProportion;
- (BOOL)hitTestForLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct __CFDictionary { } *)copyCoreUIOptions;
- (void)removeTrackingAreas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rolloverTrackingRect;
- (void)_animateToRolloverState;
- (void)mouseExitedScroller;
- (void)_animateOutOfRolloverState;

@end
