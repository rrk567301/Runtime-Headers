@class NSTrackingArea;

@interface NSLegacyScrollerImp : NSScrollerImp {
    NSTrackingArea *contentViewTrackingArea;
    double _uiStateTransitionProgress;
}

- (void)dealloc;
- (id)init;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (long long)scrollerStyle;
- (void)updateTrackingAreas;
- (double)knobEndInset;
- (BOOL)hitTestForLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setKnobAlpha:(double)a0;
- (void)setTrackAlpha:(double)a0;
- (double)uiStateTransitionProgress;
- (void)setUiStateTransitionProgress:(double)a0;
- (void)removeTrackingAreas;
- (double)trackSideInset;
- (struct __CFDictionary { } *)copyCoreUIOptions;
- (double)_knobRolloverProportion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rolloverTrackingRect;
- (void)_animateToRolloverState;
- (void)mouseExitedScroller;
- (void)_animateOutOfRolloverState;

@end
