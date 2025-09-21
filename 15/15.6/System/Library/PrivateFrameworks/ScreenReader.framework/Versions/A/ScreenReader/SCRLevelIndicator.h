@interface SCRLevelIndicator : SCRSlider

- (id)valueDescription;
- (id)statusDescription;
- (char)isInteractive;
- (char)canHandleValueChange;
- (char)decrementLarge;
- (char)decrementSmall;
- (char)incrementLarge;
- (char)incrementSmall;

@end
