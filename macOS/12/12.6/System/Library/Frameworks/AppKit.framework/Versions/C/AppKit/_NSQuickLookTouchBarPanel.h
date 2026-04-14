@interface _NSQuickLookTouchBarPanel : NSPanel

+ (BOOL)_hiddenInWindowList;

- (BOOL)isVisible;
- (id)colorSpace;
- (double)backingScaleFactor;
- (BOOL)hasKeyAppearance;
- (BOOL)worksWhenModal;
- (BOOL)_isEffectivelyVisible;

@end
