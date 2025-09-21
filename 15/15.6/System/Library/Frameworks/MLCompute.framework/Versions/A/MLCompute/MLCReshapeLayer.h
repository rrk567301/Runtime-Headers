@class NSArray;

@interface MLCReshapeLayer : MLCLayer

@property (readonly, copy, nonatomic) NSArray *shape;

+ (id)layerWithShape:(id)a0;
+ (char)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithShape:(id)a0;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (unsigned long long)deviceMemorySizeForForward;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)a0 device:(id)a1;
- (char)isStaticBatchSize;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
