@interface SCRSeparatorDockItem : SCRSlider

- (id)typeDescription;
- (BOOL)decrement;
- (BOOL)increment;
- (id)maxValue;
- (id)minValue;
- (id)valueDescription;
- (BOOL)isInteractive;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (double)minFloatValue;
- (BOOL)decrementWithPercentage:(double)a0;
- (double)maxFloatValue;
- (BOOL)incrementWithPercentage:(double)a0;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)incrementLarge;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)incrementSmall;
- (BOOL)supportsMinFloatValue;
- (BOOL)supportsMaxFloatValue;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (id)interactionValueDescription;

@end
