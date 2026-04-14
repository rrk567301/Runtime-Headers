@interface NSOverlayScrollerImp : NSScrollerImp {
    double _expansionTransitionProgress;
    BOOL _expanded;
}

@property (readonly) double _contractedTrackWidth;

- (id)init;
- (void)setEnabled:(BOOL)a0;
- (long long)scrollerStyle;
- (void)setExpanded:(BOOL)a0;
- (BOOL)isExpanded;
- (double)knobEndInset;
- (BOOL)hitTestForLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setOverlayScrollerState:(unsigned long long)a0 forceImmediately:(BOOL)a1;
- (double)expansionTransitionProgress;
- (void)setExpansionTransitionProgress:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedRectForPart:(unsigned long long)a0;
- (unsigned long long)overlayScrollerState;
- (double)trackWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForPart:(unsigned long long)a0 usingExpandedParts:(BOOL)a1;
- (struct __CFDictionary { } *)copyCoreUIOptions;
- (struct __CFDictionary { } *)copyCoreUIKnobOptions;
- (struct __CFDictionary { } *)copyCoreUITrackOptions;
- (double)_knobRolloverProportion;
- (void)_animateToRolloverState;
- (void)_animateExpansion;

@end
