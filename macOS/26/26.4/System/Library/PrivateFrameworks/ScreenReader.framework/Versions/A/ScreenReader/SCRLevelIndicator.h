@interface SCRLevelIndicator : SCRSlider

- (BOOL)isInteractive;
- (id)statusDescription;
- (id)valueDescription;
- (BOOL)canHandleValueChange;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)incrementLarge;
- (BOOL)incrementSmall;

@end
