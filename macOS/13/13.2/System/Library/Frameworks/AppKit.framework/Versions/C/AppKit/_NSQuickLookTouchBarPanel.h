@interface _NSQuickLookTouchBarPanel : NSPanel

+ (BOOL)_hiddenInWindowList;

- (BOOL)isVisible;
- (id)colorSpace;
- (BOOL)worksWhenModal;
- (BOOL)hasKeyAppearance;
- (double)backingScaleFactor;
- (BOOL)_isEffectivelyVisible;

@end
