@class NSArray, VFXWorld, NSString, VFXNode, VFXMeshSource;
@protocol VFXGeometry;

@interface VFXSkinner : NSObject <VFXWorldReference, VFXReferenceEnumerable, NSSecureCoding> {
    struct __CFXSkinner { } *_skinner;
    unsigned char _isPresentationObject : 1;
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    id<VFXGeometry> _baseGeometry;
    VFXNode *_skeleton;
    BOOL _bonesAndIndicesCompression;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VFXNode *skeleton;
@property (readonly, nonatomic) id<VFXGeometry> baseGeometry;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } baseGeometryBindTransform;
@property (readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property (readonly, nonatomic) NSArray *bones;
@property (readonly, nonatomic) VFXMeshSource *boneWeights;
@property (readonly, nonatomic) VFXMeshSource *boneIndices;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)skinnerWithSkinnerRef:(struct __CFXSkinner { } *)a0;
+ (struct __CFXSkinner { } *)_createSkinnerWithCompressedData:(id)a0 bonesCount:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
+ (id)skinnerWithBaseGeometry:(id)a0 bones:(id)a1 boneInverseBindTransforms:(id)a2 boneWeights:(id)a3 boneIndices:(id)a4;
+ (id)skinnerWithBaseMesh:(id)a0 bones:(id)a1 boneInverseBindTransforms:(id)a2 boneWeights:(id)a3 boneIndices:(id)a4;
+ (struct __CFXSkinner { } *)_createSkinnerWithBones:(id)a0 boneWeights:(id)a1 boneIndices:(id)a2 baseMesh:(id)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void *)__CFObject;
- (id)initWithSkinnerRef:(struct __CFXSkinner { } *)a0;
- (struct __CFXSkinner { } *)skinnerRef;
- (void)set_bonesAndIndicesCompression:(BOOL)a0;
- (BOOL)_bonesAndIndicesCompression;
- (void)_setBaseGeometry:(id)a0;
- (BOOL)_setSkeleton:(id)a0;
- (id)joints;
- (void)setBoneInverseBindTransforms:(id)a0;
- (void)setBones:(id)a0;
- (id)baseMesh;
- (struct { void /* unknown type, empty encoding */ x0[4]; })baseMeshBindTransform;
- (void)setBaseMeshBindTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setWorld:(id)a0;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (void)addWorldReference:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (void)removeWorldReference:(id)a0;

@end
