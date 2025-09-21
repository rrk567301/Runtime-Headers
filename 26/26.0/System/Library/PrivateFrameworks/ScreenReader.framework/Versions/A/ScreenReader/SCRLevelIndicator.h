@interface SCRLevelIndicator : SCRSlider

- (id)statusDescription;
- (BOOL)isInteractive;
- (id)valueDescription;
- (BOOL)canHandleValueChange;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)incrementLarge;
- (BOOL)incrementSmall;

@end
