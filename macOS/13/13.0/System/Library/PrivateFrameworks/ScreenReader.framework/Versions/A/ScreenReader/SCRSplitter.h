@interface SCRSplitter : SCRElement {
    BOOL _isVertical;
    double _previousValue;
    double _previousValuePercentage;
    long long _precisionUsedForValue;
}

- (id)typeDescription;
- (id)_minValue;
- (id)_maxValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)isVertical;
- (BOOL)_increment;
- (BOOL)_end;
- (BOOL)_home;
- (id)statusDescription;
- (BOOL)isInteractive;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (long long)groupBehavior;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)isControlElement;
- (BOOL)canHandleValueChange;
- (void)echoValueChangeToRequest:(id)a0;
- (long long)brailleLineType;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (id)axDescription;
- (BOOL)isAdjustable;
- (void)appendDisabledStatusDescription:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (BOOL)handleRotorAdjustWithEvent:(id)a0 direction:(long long)a1 request:(id)a2;
- (BOOL)_decrement;
- (BOOL)_decrementSmall;
- (BOOL)_incrementSmall;
- (BOOL)_decrementLarge;
- (BOOL)_incrementLarge;
- (BOOL)_incrementWithPercentage:(double)a0;
- (BOOL)_decrementWithPercentage:(double)a0;
- (double)_valuePercentage;
- (id)_valueDescriptionForElementSummary;

@end
