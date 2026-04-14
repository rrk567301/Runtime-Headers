@interface SCRWindowManagerGroup : SCRGroup

- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)shouldAutoFocusOnChildren;
- (id)promoteChildren:(id)a0;
- (BOOL)shouldMoveToSibling;
- (BOOL)moveToAdjacentSiblingElementMovingForward:(BOOL)a0 withEvent:(id)a1 request:(id)a2;

@end
