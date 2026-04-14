@interface NSMenuItemHighlightColor : NSCatalogColor

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)set;
- (void)setStroke;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (BOOL)isUniform;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)setFill;
- (id)_backingColorSettingPhase:(BOOL)a0;

@end
