@class SCNNode, NSArray, SCNGeometry, SCNGeometrySource;

@interface SCNSkinner : NSObject <NSSecureCoding> {
    struct __C3DSkinner { } *_skinner;
    SCNGeometry *_baseGeometry;
    BOOL _bonesAndIndicesCompression;
    SCNNode *_skeleton;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) SCNNode *skeleton;
@property (retain, nonatomic) SCNGeometry *baseGeometry;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } baseGeometryBindTransform;
@property (readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property (readonly, nonatomic) NSArray *bones;
@property (readonly, nonatomic) SCNGeometrySource *boneWeights;
@property (readonly, nonatomic) SCNGeometrySource *boneIndices;

+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner { } *)a0;
+ (id)skinnerWithBaseGeometry:(id)a0 bones:(id)a1 boneInverseBindTransforms:(id)a2 boneWeights:(id)a3 boneIndices:(id)a4;
+ (struct __C3DSkinner { } *)_createSkinnerWithVertexCount:(long long)a0 bones:(id)a1 boneWeights:(id)a2 boneIndices:(id)a3 baseGeometry:(id)a4;
+ (struct __C3DSkinner { } *)createSkinnerWithBaseGeometry:(id)a0 bones:(id)a1 boneWeights:(id)a2 boneIndices:(id)a3;
+ (struct __C3DSkinner { } *)_createSkinnerWithCompressedData:(id)a0 bonesCount:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
+ (id)_skinnerWithBaseGeometry:(id)a0 skinnableGeometry:(id)a1 bones:(id)a2 boneInverseBindTransforms:(id)a3 bindMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a4;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)scene;
- (struct __C3DScene { } *)sceneRef;
- (void)_syncObjCModel;
- (struct __C3DSkinner { } *)skinnerRef;
- (const void *)__CFObject;
- (id)initWithSkinnerRef:(struct __C3DSkinner { } *)a0;
- (void)_setBaseGeometry:(id)a0;
- (void)setBones:(id)a0;
- (BOOL)_setSkeleton:(id)a0;
- (void)set_bonesAndIndicesCompression:(BOOL)a0;
- (void)setBoneInverseBindTransforms:(id)a0;
- (BOOL)wantsCPUSkinning;
- (void)setWantsCPUSkinning:(BOOL)a0;
- (BOOL)_bonesAndIndicesCompression;
- (id)joints;

@end
