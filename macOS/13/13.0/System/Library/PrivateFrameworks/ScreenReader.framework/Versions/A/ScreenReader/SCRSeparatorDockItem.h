@interface SCRSeparatorDockItem : SCRSlider

- (id)typeDescription;
- (BOOL)increment;
- (BOOL)decrement;
- (id)minValue;
- (id)maxValue;
- (id)valueDescription;
- (BOOL)isInteractive;
- (long long)groupBehavior;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (BOOL)decrementWithPercentage:(double)a0;
- (BOOL)incrementWithPercentage:(double)a0;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(BOOL)a2;
- (BOOL)supportsMinFloatValue;
- (BOOL)supportsMaxFloatValue;
- (double)minFloatValue;
- (double)maxFloatValue;
- (BOOL)decrementSmall;
- (BOOL)incrementSmall;
- (BOOL)decrementLarge;
- (BOOL)incrementLarge;
- (BOOL)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (id)interactionValueDescription;

@end
