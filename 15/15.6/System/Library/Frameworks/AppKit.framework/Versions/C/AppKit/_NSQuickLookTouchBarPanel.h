@interface _NSQuickLookTouchBarPanel : NSPanel

+ (char)_hiddenInWindowList;

- (char)_isEffectivelyVisible;
- (double)backingScaleFactor;
- (id)colorSpace;
- (char)hasKeyAppearance;
- (char)isVisible;
- (char)worksWhenModal;

@end
