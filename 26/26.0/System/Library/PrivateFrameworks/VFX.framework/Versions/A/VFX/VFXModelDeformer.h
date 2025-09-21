@class NSString, VFXWorld;

@interface VFXModelDeformer : NSObject <VFXWorldReference, VFXReferenceEnumerable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)supportedOutputs;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)requiredOutputs;
- (void)_enumerateDependencyNodesUsingBlock:(id /* block */)a0;
- (BOOL)_getDeformedMeshBoundingBox:(struct { } *)a0;
- (BOOL)deformedMeshReliesOnFrustum;
- (BOOL)deformedMeshReliesOnTransforms;
- (id)dependencyNodeAtIndex:(unsigned long long)a0;
- (id)meshForDeformedTopology;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
