@interface NSMenuItemHighlightColor : NSCatalogColor

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)set;
- (void)setStroke;
- (void)setFill;
- (id)_backingColorSettingPhase:(char)a0;
- (double)alphaComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (char)isUniform;

@end
