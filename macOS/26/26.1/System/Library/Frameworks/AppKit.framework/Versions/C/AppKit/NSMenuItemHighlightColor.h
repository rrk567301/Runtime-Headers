@interface NSMenuItemHighlightColor : NSCatalogColor

- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (void)set;
- (void)setStroke;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)alphaComponent;
- (id)init;
- (id)_backingColorSettingPhase:(BOOL)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (BOOL)isUniform;

@end
