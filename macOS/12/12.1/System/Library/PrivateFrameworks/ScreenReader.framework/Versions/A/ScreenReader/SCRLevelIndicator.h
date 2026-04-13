@interface SCRLevelIndicator : SCRSlider

- (id)valueDescription;
- (id)statusDescription;
- (BOOL)isInteractive;
- (BOOL)canHandleValueChange;
- (BOOL)incrementLarge;
- (BOOL)decrementLarge;
- (BOOL)decrementSmall;
- (BOOL)incrementSmall;

@end
