@class NSColor;

@interface GKDynamicColor : NSDynamicNamedColor

@property (readonly, nonatomic) NSColor *lightColor;
@property (readonly, nonatomic) NSColor *darkColor;
@property (readonly, nonatomic) NSColor *lightHighContrastColor;
@property (readonly, nonatomic) NSColor *darkHighContrastColor;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1;
- (id)resolvedColor;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1 lightHighContrastColor:(id)a2 darkHighContrastColor:(id)a3;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1 darkHighContrastColor:(id)a2;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1 lightHighContrastColor:(id)a2;

@end
