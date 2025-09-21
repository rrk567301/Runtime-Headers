@interface NSMenuItemHighlightColor : NSCatalogColor

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)alphaComponent;
- (void)set;
- (void)setStroke;
- (id)init;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setFill;
- (id)_backingColorSettingPhase:(BOOL)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (BOOL)isUniform;

@end
