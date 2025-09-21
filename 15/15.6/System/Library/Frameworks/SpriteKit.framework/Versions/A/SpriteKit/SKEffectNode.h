@class NSString, NSDictionary, CIFilter, SKShader, SKWarpGeometry;

@interface SKEffectNode : SKNode <SKWarpable> {
    void *_skcEffectNode;
}

@property (retain, nonatomic) CIFilter *filter;
@property (nonatomic) char shouldCenterFilter;
@property (nonatomic) char shouldEnableEffects;
@property (nonatomic) char shouldRasterize;
@property (nonatomic) long long blendMode;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (retain, nonatomic) SKWarpGeometry *warpGeometry;
@property (nonatomic) long long subdivisionLevels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToNode:(id)a0;
- (void)_didMakeBackingNode;
- (void)_flippedChangedFrom:(char)a0 to:(char)a1;
- (void *)_makeBackingNode;
- (void)_scaleFactorChangedFrom:(float)a0 to:(float)a1;
- (void)setValue:(id)a0 forAttributeNamed:(id)a1;
- (id)valueForAttributeNamed:(id)a0;

@end
