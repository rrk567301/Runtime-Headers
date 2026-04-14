@class NSColor, NSArray;

@interface NSDynamicModifiedColor : NSDynamicNamedColor {
    NSColor *_baseColor;
    NSArray *_modifiers;
}

- (id)colorWithAlphaComponent:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)resolvedColor;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)_colorWithModifier:(id)a0;
- (id)baseColor;
- (id)initWithBaseColor:(id)a0 modifiers:(id)a1;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (id)modifiers;

@end
