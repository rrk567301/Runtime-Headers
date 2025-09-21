@interface _NSQuickLookTouchBarPanel : NSPanel

+ (BOOL)_hiddenInWindowList;

- (id)colorSpace;
- (BOOL)isVisible;
- (BOOL)_isEffectivelyVisible;
- (double)backingScaleFactor;
- (BOOL)hasKeyAppearance;
- (BOOL)worksWhenModal;

@end
