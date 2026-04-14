@class NSColor;

@interface SKLightNode : SKNode {
    void *_skcLightNode;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSColor *lightColor;
@property (retain, nonatomic) NSColor *ambientColor;
@property (retain, nonatomic) NSColor *shadowColor;
@property (nonatomic) double falloff;
@property (nonatomic) unsigned int categoryBitMask;

+ (BOOL)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (BOOL)isEqualToNode:(id)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (double)lightDecay;
- (void)setLightDecay:(double)a0;
- (unsigned int)lightCategoryBitMask;
- (void)setLightCategoryBitMask:(unsigned int)a0;

@end
