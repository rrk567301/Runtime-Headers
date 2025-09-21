@interface SCRSplitter : SCRElement {
    char _isVertical;
    double _previousValue;
    double _previousValuePercentage;
    long long _precisionUsedForValue;
}

- (id)typeDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (char)isVertical;
- (id)statusDescription;
- (char)isInteractive;
- (id)_maxValue;
- (id)_minValue;
- (char)_increment;
- (char)_end;
- (id)axDescription;
- (char)_decrementSmall;
- (char)_incrementSmall;
- (long long)brailleLineType;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (char)_decrementLarge;
- (char)_incrementLarge;
- (char)_decrement;
- (char)_decrementWithPercentage:(double)a0;
- (char)_home;
- (char)_incrementWithPercentage:(double)a0;
- (id)_valueDescriptionForElementSummary;
- (double)_valuePercentage;
- (void)addElementSummaryToRequest:(id)a0;
- (void)appendDisabledStatusDescription:(id)a0;
- (char)canHandleValueChange;
- (char)canNavigateToChildren;
- (unsigned long long)directInteractionArrowCaptureMask;
- (void)echoValueChangeToRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(char)a2;
- (char)handleRotorAdjustWithEvent:(id)a0 direction:(long long)a1 request:(id)a2;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (char)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isAdjustable;
- (char)isControlElement;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;

@end
