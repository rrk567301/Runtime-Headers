@interface SCNGeometryVDMCDeformer : SCNGeometryDeformer

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)supportedOutputs;
- (id)init;
- (void)dealloc;
- (unsigned long long)requiredOutputs;
- (BOOL)deformedMeshReliesOnFrustum;
- (BOOL)deformedMeshReliesOnTransforms;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
