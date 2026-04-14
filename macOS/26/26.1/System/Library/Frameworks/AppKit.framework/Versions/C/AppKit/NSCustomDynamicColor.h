@interface NSCustomDynamicColor : NSDynamicNamedColor {
    id /* block */ _dynamicProvider;
}

- (id)colorWithAlphaComponent:(double)a0;
- (id)resolvedColor;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)_getSemanticallyEquivalentVisualEffectMaterial:(long long *)a0;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (id)initWithName:(id)a0 dynamicProvider:(id /* block */)a1;

@end
