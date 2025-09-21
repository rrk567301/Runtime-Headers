@class MLCTensorParameter, MLCEmbeddingDescriptor, MLCTensor;

@interface MLCEmbeddingLayer : MLCLayer

@property (readonly, copy, nonatomic) MLCEmbeddingDescriptor *descriptor;
@property (readonly, retain, nonatomic) MLCTensor *weights;
@property (readonly, retain, nonatomic) MLCTensorParameter *weightsParameter;

+ (id)layerWithDescriptor:(id)a0 weights:(id)a1;
+ (char)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (char)allocateDataForOptimizer:(id)a0;
- (void)allocateGradientsForParameters;
- (unsigned long long)allocatedDataSizeForTraining:(char)a0 optimizer:(id)a1;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithDescriptor:(id)a0 weight:(id)a1;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (void)linkAssociatedTensors;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

@end
