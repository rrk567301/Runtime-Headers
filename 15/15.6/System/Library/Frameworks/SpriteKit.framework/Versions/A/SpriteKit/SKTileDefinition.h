@class NSString, NSArray, NSMutableDictionary, SKTileGroupRule, NSMutableArray;

@interface SKTileDefinition : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_textures;
    NSMutableArray *_normals;
    unsigned long long _orientation;
}

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) SKTileGroupRule *parentRule;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) unsigned short currentFrameIndex;
@property (nonatomic) double lastTargetTime;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) char frameDidChange;
@property (nonatomic) char nextFrameAffectsVertexBuffer;
@property (copy, nonatomic) NSArray *textures;
@property (copy, nonatomic) NSArray *normalTextures;
@property (retain, nonatomic) NSMutableDictionary *userData;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double timePerFrame;
@property (nonatomic) unsigned long long placementWeight;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) char flipVertically;
@property (nonatomic) char flipHorizontally;

+ (id)tileDefinitionWithTexture:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)tileDefinitionWithTexture:(id)a0;
+ (id)tileDefinitionWithTexture:(id)a0 normalTexture:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)tileDefinitionWithTextures:(id)a0 normalTextures:(id)a1 size:(struct CGSize { double x0; double x1; })a2 timePerFrame:(double)a3;
+ (id)tileDefinitionWithTextures:(id)a0 size:(struct CGSize { double x0; double x1; })a1 timePerFrame:(double)a2;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTexture:(id)a0;
- (char)isEqualToNode:(id)a0;
- (id)initWithTexture:(id)a0 normalTexture:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)initWithTexture:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTextures:(id)a0 normalTextures:(id)a1 size:(struct CGSize { double x0; double x1; })a2 timePerFrame:(double)a3;
- (id)initWithTextures:(id)a0 size:(struct CGSize { double x0; double x1; })a1 timePerFrame:(double)a2;
- (void)setDataWithTexture:(id)a0 normalTexture:(id)a1 tileName:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)setDataWithTextures:(id)a0 normalTextures:(id)a1 timePerFrame:(double)a2 tileName:(id)a3 size:(struct CGSize { double x0; double x1; })a4;

@end
