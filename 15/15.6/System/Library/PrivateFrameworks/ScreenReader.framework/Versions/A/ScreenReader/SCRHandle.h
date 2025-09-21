@interface SCRHandle : SCRMapElement {
    long long _movementOffset;
}

- (char)isInteractive;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (char)_moveByOffset:(long long)a0 vertically:(char)a1 request:(id)a2;
- (void)addAdditionalElementSummaryToRequest:(id)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(char)a2;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isAdjustable;

@end
