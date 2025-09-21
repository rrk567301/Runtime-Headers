@interface NSSourceListBackgroundColor : NSDynamicNamedColor

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (Class)classForCoder;
- (id)_displayColorForActiveState:(char)a0;
- (char)_isSourceListColor;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (char)isUniform;
- (id)resolvedColor;

@end
