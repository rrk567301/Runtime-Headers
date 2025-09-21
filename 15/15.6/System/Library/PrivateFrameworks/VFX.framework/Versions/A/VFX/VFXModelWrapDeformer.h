@class VFXNode, VFXModelWrapDeformerParameters;

@interface VFXModelWrapDeformer : VFXModelDeformer {
    VFXNode *_innerLayerNode;
    VFXNode *_outerLayerNode;
    VFXModelWrapDeformerParameters *_parameters;
    char _isLegacySingleLayerDeformer;
    VFXNode *_legacyDrivingNode;
}

@property (readonly, weak, nonatomic) VFXNode *drivingNode;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)supportedOutputs;
- (id)initWithDrivingNode:(id)a0 parameters:(id)a1;
- (char)_getDeformedMeshBoundingBox:(struct { } *)a0;
- (id)dependencyNodeAtIndex:(unsigned long long)a0;
- (void)initParametersIfNeededForDeformedNode:(id)a0;
- (id)initWithInnerLayerNode:(id)a0 outerLayerNode:(id)a1 parameters:(id)a2;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;

@end
