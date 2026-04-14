@class NSColor;

@interface AMSUICommonDynamicNamedColor : NSDynamicNamedColor

@property (readonly) NSColor *darkColor;
@property (readonly) NSColor *darkHighContrastColor;
@property (readonly) NSColor *lightColor;
@property (readonly) NSColor *lightHighContrastColor;

- (unsigned long long)hash;
- (id)resolvedColor;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1 lightHighContrastColor:(id)a2 darkHighContrastColor:(id)a3;

@end
