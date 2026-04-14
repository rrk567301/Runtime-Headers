@class NSColor, NSArray;

@interface NSDynamicModifiedColor : NSDynamicNamedColor {
    NSColor *_baseColor;
    NSArray *_modifiers;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (id)initWithBaseColor:(id)a0 modifiers:(id)a1;
- (id)baseColor;
- (id)modifiers;
- (id)resolvedColor;
- (id)colorWithAlphaComponent:(double)a0;
- (id)_colorWithModifier:(id)a0;

@end
