@interface SCRWindowManagerGroup : SCRGroup

- (char)moveToAdjacentSiblingElementMovingForward:(char)a0 withEvent:(id)a1 request:(id)a2;
- (id)promoteChildren:(id)a0;
- (char)shouldAutoFocusOnChildren;
- (char)shouldMoveToSibling;
- (char)shouldSpeakItemCountWhenFocusingIn;

@end
