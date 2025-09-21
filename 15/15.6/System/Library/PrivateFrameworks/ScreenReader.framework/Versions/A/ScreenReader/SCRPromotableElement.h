@interface SCRPromotableElement : SCRMapElement

@property (nonatomic) char handlingBeginFocus;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (char)shouldMap;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)highlightTarget;
- (void)addItemDescriptionForCommand:(id)a0 toRequest:(id)a1 event:(id)a2;
- (void)addToHistory;
- (char)allowFocusThroughSingleChild;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (char)canWrapWhileNavigating;
- (void)endFocus;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)shouldThrottleNavigationEvent:(id)a0;

@end
