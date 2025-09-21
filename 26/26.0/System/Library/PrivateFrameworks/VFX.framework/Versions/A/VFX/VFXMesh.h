@class NSArray, VFXWorld, NSString, NSMutableArray;

@interface VFXMesh : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXGeometry> {
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    struct __CFXMesh { } *_mesh;
    unsigned char _isPresentationObject : 1;
    NSMutableArray *_sources;
    NSMutableArray *_elements;
    NSArray *_sourceChannels;
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *meshSources;
@property (readonly, nonatomic) NSArray *meshElements;
@property (readonly, nonatomic) long long meshElementCount;
@property (readonly, nonatomic) NSArray *meshSourceChannels;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[2]; } boundingBox;

+ (id)mesh;
+ (id)meshWithSources:(id)a0 elements:(id)a1;
+ (id)meshWithSources:(id)a0 elements:(id)a1 sourceChannels:(id)a2;
+ (id)meshWithMeshRef:(struct __CFXMesh { } *)a0;

- (id)debugQuickLookObject;
- (id)identifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)a0;
- (void *)__CFObject;
- (BOOL)getBoundingSphereCenter:(void *)a0 radius:(float *)a1;
- (id)keyForNodeAttributes;
- (id)_renderableCopy;
- (id)interleavedCopy;
- (void)_discardOriginalTopology;
- (void)_releaseCachedSourcesAndElements;
- (id)debugQuickLookData;
- (void)setWorld:(id)a0;
- (id)meshDescription;
- (struct __CFXMesh { } *)meshRef;
- (id)_meshByRebuildingNormals;
- (id)_meshByRemovingSkinnerSources;
- (id)_meshByWeldingVerticesWithThreshold:(float)a0 normalThreshold:(float)a1;
- (void)_rebuildMeshElementsFromPresentation;
- (void)_rebuildMeshSourcesFromPresentation;
- (void)_updateEntityModelFromPresentation;
- (void)_updateEntityPresentationFromModel;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (void)addWorldReference:(id)a0;
- (id)debugQuickLookObjectWithWorld:(id)a0;
- (void)decodeMeshWithCoder:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithMeshRef:(struct __CFXMesh { } *)a0;
- (void)makeUniqueID;
- (id)meshElementAtIndex:(long long)a0;
- (id)meshSourcesForSemantic:(id)a0;
- (void)removeWorldReference:(id)a0;
- (void)setMeshRef:(struct __CFXMesh { } *)a0;

@end
