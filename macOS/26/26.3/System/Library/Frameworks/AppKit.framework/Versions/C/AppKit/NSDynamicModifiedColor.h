@class NSColor, NSArray;

@interface NSDynamicModifiedColor : NSDynamicNamedColor {
    NSColor *_baseColor;
    NSArray *_modifiers;
}

- (id)colorWithAlphaComponent:(double)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)resolvedColor;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_colorWithModifier:(id)a0;
- (id)baseColor;
- (id)initWithBaseColor:(id)a0 modifiers:(id)a1;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (id)modifiers;

@end
