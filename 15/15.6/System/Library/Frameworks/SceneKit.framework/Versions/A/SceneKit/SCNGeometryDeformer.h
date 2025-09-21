@interface SCNGeometryDeformer : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)supportedOutputs;
- (unsigned long long)requiredOutputs;
- (void)_enumerateDependencyNodesUsingBlock:(id /* block */)a0;
- (char)_getDeformedMeshBoundingBox:(struct { } *)a0;
- (char)deformedMeshReliesOnFrustum;
- (char)deformedMeshReliesOnTransforms;
- (id)dependencyNodeAtIndex:(unsigned long long)a0;
- (id)meshForDeformedTopology;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
