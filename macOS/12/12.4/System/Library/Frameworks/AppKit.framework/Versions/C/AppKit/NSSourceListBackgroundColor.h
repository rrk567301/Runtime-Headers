@interface NSSourceListBackgroundColor : NSDynamicNamedColor

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (Class)classForCoder;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (id)resolvedColor;
- (BOOL)isUniform;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isSourceListColor;
- (id)_displayColorForActiveState:(BOOL)a0;

@end
