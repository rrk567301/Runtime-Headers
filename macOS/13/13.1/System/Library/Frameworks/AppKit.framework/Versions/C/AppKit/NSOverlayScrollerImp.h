@interface NSOverlayScrollerImp : NSScrollerImp {
    double _expansionTransitionProgress;
    BOOL _expanded;
}

@property (readonly) double _contractedTrackWidth;

- (id)init;
- (void)setEnabled:(BOOL)a0;
- (void)setExpanded:(BOOL)a0;
- (BOOL)isExpanded;
- (long long)scrollerStyle;
- (void)setExpansionTransitionProgress:(double)a0;
- (double)expansionTransitionProgress;
- (unsigned long long)overlayScrollerState;
- (void)setOverlayScrollerState:(unsigned long long)a0 forceImmediately:(BOOL)a1;
- (double)trackWidth;
- (double)knobEndInset;
- (double)_knobRolloverProportion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForPart:(unsigned long long)a0 usingExpandedParts:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedRectForPart:(unsigned long long)a0;
- (BOOL)hitTestForLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct __CFDictionary { } *)copyCoreUIOptions;
- (struct __CFDictionary { } *)copyCoreUIKnobOptions;
- (struct __CFDictionary { } *)copyCoreUITrackOptions;
- (void)_animateToRolloverState;
- (void)_animateExpansion;

@end
