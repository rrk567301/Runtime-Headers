@interface SCNGeometryVDMCDeformer : SCNGeometryDeformer

+ (BOOL)supportsSecureCoding;

- (unsigned long long)supportedOutputs;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)requiredOutputs;
- (BOOL)deformedMeshReliesOnFrustum;
- (BOOL)deformedMeshReliesOnTransforms;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
