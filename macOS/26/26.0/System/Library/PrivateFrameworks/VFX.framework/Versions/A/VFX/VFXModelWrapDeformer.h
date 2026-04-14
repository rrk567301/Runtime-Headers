@class VFXNode, VFXModelWrapDeformerParameters;

@interface VFXModelWrapDeformer : VFXModelDeformer {
    VFXNode *_innerLayerNode;
    VFXNode *_outerLayerNode;
    VFXModelWrapDeformerParameters *_parameters;
    BOOL _isLegacySingleLayerDeformer;
    VFXNode *_legacyDrivingNode;
}

@property (readonly, weak, nonatomic) VFXNode *drivingNode;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)supportedOutputs;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDrivingNode:(id)a0 parameters:(id)a1;
- (BOOL)_getDeformedMeshBoundingBox:(struct { } *)a0;
- (id)dependencyNodeAtIndex:(unsigned long long)a0;
- (void)initParametersIfNeededForDeformedNode:(id)a0;
- (id)initWithInnerLayerNode:(id)a0 outerLayerNode:(id)a1 parameters:(id)a2;
- (id)newDeformerInstanceForNode:(id)a0 outputs:(unsigned long long)a1 computeVertexCount:(unsigned long long)a2 context:(id)a3;
- (unsigned long long)requiredInputs;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;

@end
