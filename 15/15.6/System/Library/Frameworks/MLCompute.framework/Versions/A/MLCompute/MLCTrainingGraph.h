@class MLCOptimizer, NSSet, MLCLayer, NSMutableArray;
@protocol MLCLayerCompiling;

@interface MLCTrainingGraph : MLCGraph

@property (retain, nonatomic) MLCOptimizer *optimizer;
@property (retain, nonatomic) NSMutableArray *optimizerUpdateLayerList;
@property (retain, nonatomic) NSMutableArray *optimizerParameterList;
@property (retain, nonatomic) NSMutableArray *rootSourceGradientTensor;
@property (retain, nonatomic) NSMutableArray *lossLayersInTrainingGraph;
@property (retain, nonatomic) NSMutableArray *stopGradientTensorList;
@property (retain, nonatomic) MLCLayer<MLCLayerCompiling> *lossLayer;
@property (readonly, nonatomic) MLCLayer *dummyLayer;
@property (nonatomic) unsigned long long firstTrainableLayerIndex;
@property (nonatomic) char allocateResultGradientTensors;
@property (nonatomic) char allocateOptimizerData;
@property (nonatomic) char updateOptimizerTimeStep;
@property (retain, nonatomic) NSSet *optimizerUpdateDeviceList;
@property (readonly, nonatomic) unsigned long long deviceMemorySize;

+ (id)graphWithGraphObjects:(id)a0 lossLayer:(id)a1 optimizer:(id)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)addOutputs:(id)a0;
- (char)addInputs:(id)a0 lossLabels:(id)a1;
- (char)compileWithOptions:(unsigned long long)a0 device:(id)a1;
- (char)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 batchSize:(unsigned long long)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (id)resultTensorsForLayer:(id)a0;
- (void)synchronizeUpdates;
- (char)addInputs:(id)a0 lossLabels:(id)a1 lossLabelWeights:(id)a2;
- (char)setTrainingTensorParameters:(id)a0;
- (id)gradientDataForParameter:(id)a0 layer:(id)a1;
- (char)linkWithGraphs:(id)a0;
- (void)allocateGradientTensorsForLayersInGraph:(char)a0;
- (char)allocateGradientTensorsForMultipleChildrenOfLayer:(id)a0 gradientTensorsAreTemporary:(char)a1 device:(id)a2;
- (char)allocateGradientTensorsForMultipleChildrenOfSplitLayer:(id)a0 tensor:(id)a1 gradientTensorsAreTemporary:(char)a2 device:(id)a3;
- (char)allocateOptimizerDataForGraph;
- (char)allocateRootSourceGradientTensors:(id)a0;
- (id)allocateUserGradientForTensor:(id)a0;
- (char)bindOptimizerData:(id)a0 deviceData:(id)a1 withTensor:(id)a2;
- (char)checkAndSumIfSharedParameterUpdateForNormalizationLayerTensor:(id)a0 layer:(id)a1 device:(id)a2 isBetaTensor:(char)a3;
- (char)compileAndAllocateGradientTensorsForGraph:(char)a0;
- (char)compileOptimizer:(id)a0;
- (char)compileWithOptions:(unsigned long long)a0 device:(id)a1 inputTensors:(id)a2 inputTensorsData:(id)a3;
- (unsigned long long)deviceMemorySizeWithDevice:(id)a0;
- (void)executeForwardToLayerIndex:(unsigned long long)a0 resultTensor:(id)a1 resultStateIsTemporary:(char)a2 batchSize:(unsigned long long)a3 forTraining:(char)a4 executionOptions:(unsigned long long)a5;
- (char)executeForwardWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (char)executeForwardWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 outputsData:(id)a2 completionHandler:(id /* block */)a3;
- (void)executeGradientFromLayerIndex:(unsigned long long)a0 resultStateIsTemporary:(char)a1 batchSize:(unsigned long long)a2 executionOptions:(unsigned long long)a3;
- (char)executeGradientWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (char)executeGradientWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 outputsData:(id)a2 completionHandler:(id /* block */)a3;
- (void)executeOptimizerUpdateWithExecutionOptions:(unsigned long long)a0;
- (char)executeOptimizerUpdateWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (char)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 outputsData:(id)a3 batchSize:(unsigned long long)a4 options:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (id)gradientTensorForInput:(id)a0;
- (id)initWithGraphObjects:(id)a0 lossLayer:(id)a1 optimizer:(id)a2;
- (char)isSourceTensorSharableWithResultGradientTensor:(id)a0 layer:(id)a1;
- (unsigned long long)layerIndexToStoreSummedGradientsForTensor:(id)a0;
- (void)linkRelatedGradientTensorsForConcatLayer:(id)a0 device:(id)a1;
- (void)markLayersAsTrainable;
- (char)recompileWithOptions:(unsigned long long)a0;
- (id)resultGradientTensorToUseByExecuteGradientForLayer:(id)a0 sourceIndex:(unsigned long long)a1 incrementIntermediateIndex:(char)a2;
- (id)resultGradientTensorsForLayer:(id)a0;
- (id)resultGradientTensorsForLayer:(id)a0 summedGradientForInputTensors:(char)a1;
- (id)sourceGradientTensorsForLayer:(id)a0;
- (id)sourceTensorsForLayer:(id)a0;
- (char)stopGradientForTensors:(id)a0;
- (void)sumAllRootSourceGradientTensors:(id)a0;
- (void)sumIntermediateGradientTensorsForLayer:(id)a0;
- (void)sumRootSourceGradientTensor:(id)a0 device:(id)a1;
- (void)updateIsTrainableForLayerWithStopGradientTensor:(id)a0 checkChildLayers:(char)a1;
- (void)updateTrainableLayerList:(char)a0;

@end
