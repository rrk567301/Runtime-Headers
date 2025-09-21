@class NSArray, MLCMultiheadAttentionDescriptor;

@interface MLCMultiheadAttentionLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCMultiheadAttentionDescriptor *descriptor;
@property (readonly, retain, nonatomic) NSArray *weights;
@property (readonly, retain, nonatomic) NSArray *biases;
@property (readonly, retain, nonatomic) NSArray *attentionBiases;
@property (readonly, retain, nonatomic) NSArray *weightsParameters;
@property (readonly, retain, nonatomic) NSArray *biasesParameters;

+ (id)layerWithDescriptor:(id)a0 weights:(id)a1 biases:(id)a2 attentionBiases:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (char)allocateDataForOptimizer:(id)a0;
- (void)allocateGradientsForParameters;
- (unsigned long long)allocatedDataSizeForTraining:(char)a0 optimizer:(id)a1;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithDescriptor:(id)a0 weights:(id)a1 bias:(id)a2 attentionBias:(id)a3;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (void)linkAssociatedTensors;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

@end
