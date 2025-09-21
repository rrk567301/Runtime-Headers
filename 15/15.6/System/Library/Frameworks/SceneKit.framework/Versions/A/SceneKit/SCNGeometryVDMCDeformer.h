@interface SCNGeometryVDMCDeformer : SCNGeometryDeformer

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)supportedOutputs;
- (unsigned long long)requiredOutputs;
- (char)deformedMeshReliesOnFrustum;
- (char)deformedMeshReliesOnTransforms;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
