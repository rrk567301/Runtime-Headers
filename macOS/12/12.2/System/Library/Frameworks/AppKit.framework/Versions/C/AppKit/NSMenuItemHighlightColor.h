@interface NSMenuItemHighlightColor : NSCatalogColor

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)set;
- (void)setStroke;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (void)setFill;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;
- (id)_backingColorSettingPhase:(BOOL)a0;

@end
