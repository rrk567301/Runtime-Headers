@interface SCRSeparatorDockItem : SCRSlider

- (id)typeDescription;
- (char)decrement;
- (char)increment;
- (id)maxValue;
- (id)minValue;
- (id)valueDescription;
- (char)isInteractive;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (char)decrementLarge;
- (char)decrementSmall;
- (char)decrementWithPercentage:(double)a0;
- (long long)groupBehavior;
- (void)handleInteractionOutput:(id)a0 forCommand:(id)a1 withStatus:(char)a2;
- (char)incrementLarge;
- (char)incrementSmall;
- (char)incrementWithPercentage:(double)a0;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpWithEvent:(id)a0 request:(id)a1;
- (char)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)interactionValueDescription;
- (double)maxFloatValue;
- (double)minFloatValue;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)supportsMaxFloatValue;
- (char)supportsMinFloatValue;

@end
