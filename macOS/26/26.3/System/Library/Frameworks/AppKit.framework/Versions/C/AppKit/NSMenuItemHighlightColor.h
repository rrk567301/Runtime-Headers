@interface NSMenuItemHighlightColor : NSCatalogColor

- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (void)setStroke;
- (void)set;
- (void)setFill;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_backingColorSettingPhase:(BOOL)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (BOOL)isUniform;

@end
