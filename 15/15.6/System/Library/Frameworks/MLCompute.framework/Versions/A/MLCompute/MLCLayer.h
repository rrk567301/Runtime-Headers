@class NSNumber, NSString, MLCDevice, NSArray, MLCControlTreeNode, NSMutableArray;

@interface MLCLayer : NSObject <MLCLayerCompiling>

@property (nonatomic) unsigned long long layerID;
@property (readonly, copy, nonatomic) NSString *originalLabel;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;
@property (nonatomic) unsigned long long paddingSizeInX;
@property (nonatomic) unsigned long long paddingSizeInY;
@property (retain, nonatomic) MLCDevice *device;
@property (retain, nonatomic) NSArray *deviceOps;
@property (nonatomic) char skipLayer;
@property (nonatomic) char allocateGradientTensors;
@property (nonatomic) char isLastFusedLayer;
@property (nonatomic) char disableUpdate;
@property (nonatomic) char isUpdatable;
@property (nonatomic) char isTrainable;
@property (retain, nonatomic) NSMutableArray *sourceTensors;
@property (retain, nonatomic) NSMutableArray *resultTensors;
@property (retain, nonatomic) NSMutableArray *sourceGradientTensors;
@property (retain, nonatomic) NSMutableArray *resultGradientTensors;
@property (readonly, retain, nonatomic) NSMutableArray *fusedLayers;
@property (retain, nonatomic) MLCLayer *intermediateSumLayer;
@property (retain, nonatomic) NSMutableArray *intermediateGradientTensors;
@property (nonatomic) unsigned long long intermediateGradientTensorIndex;
@property (nonatomic) char zeroIntermediateGradientTensors;
@property (nonatomic) char compileForInferenceOnly;
@property (retain, nonatomic) MLCControlTreeNode *conditionalTreeNode;
@property (readonly, nonatomic) char isFirstLayer;
@property (readonly, nonatomic) char isLastLayer;
@property (readonly, nonatomic) NSNumber *key;
@property (readonly, nonatomic) NSString *summarizedDOTDescription;
@property (nonatomic) int paddingPolicy;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) char isDebuggingEnabled;
@property (readonly, nonatomic) int deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsDataType:(int)a0 onDevice:(id)a1;

- (void).cxx_destruct;
- (void)setBatchSize:(unsigned long long)a0;
- (unsigned long long)parametersCount;
- (char)allocateDataForOptimizer:(id)a0;
- (void)allocateGradientsForParameters;
- (unsigned long long)allocatedDataSizeForTraining:(char)a0 optimizer:(id)a1;
- (void)assignLayerID:(unsigned long long)a0;
- (void)bindDevice:(id)a0 deviceOps:(id)a1;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensors:(id)a2;
- (unsigned long long)deviceMemorySizeForForward;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (id)getDeviceForInference;
- (id)getDeviceForTraining;
- (id)initWithLabel:(id)a0;
- (char)isGradientNeededForTensor:(id)a0;
- (char)isStaticBatchSize;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (char)isTensorSharedAcrossMultipleTrainingLayers:(id)a0;
- (char)isValidTrainingParameters;
- (void)linkAssociatedTensors;
- (void)resetLayerID;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (unsigned long long)resultSizeFromSourceSizes:(id)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)resultTensorsFromBroadcastableSources:(id)a0 resultTensorDataType:(int)a1;
- (void)setIsDebuggingEnabled:(char)a0 isPrivate:(char)a1;
- (void)unlinkAssociatedTensors;

@end
