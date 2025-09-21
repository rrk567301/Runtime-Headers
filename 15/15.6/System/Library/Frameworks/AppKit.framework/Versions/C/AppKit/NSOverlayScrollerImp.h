@interface NSOverlayScrollerImp : NSScrollerImp {
    double _expansionTransitionProgress;
    char _expanded;
}

@property (readonly) double _contractedTrackWidth;

- (id)init;
- (void)setEnabled:(char)a0;
- (void)setExpansionTransitionProgress:(double)a0;
- (void)_animateExpansion;
- (void)_animateToRolloverState;
- (double)_knobRolloverProportion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForPart:(unsigned long long)a0 usingExpandedParts:(char)a1;
- (struct __CFDictionary { } *)copyCoreUIKnobOptions;
- (struct __CFDictionary { } *)copyCoreUIOptions;
- (struct __CFDictionary { } *)copyCoreUITrackOptions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedRectForPart:(unsigned long long)a0;
- (double)expansionTransitionProgress;
- (char)hitTestForLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)isExpanded;
- (double)knobEndInset;
- (unsigned long long)overlayScrollerState;
- (long long)scrollerStyle;
- (void)setExpanded:(char)a0;
- (void)setOverlayScrollerState:(unsigned long long)a0 forceImmediately:(char)a1;
- (double)trackWidth;

@end
