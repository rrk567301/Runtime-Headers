@interface _NSQuickLookTouchBarPanel : NSPanel

+ (BOOL)_hiddenInWindowList;

- (BOOL)isVisible;
- (id)colorSpace;
- (BOOL)_isEffectivelyVisible;
- (double)backingScaleFactor;
- (BOOL)hasKeyAppearance;
- (BOOL)worksWhenModal;

@end
