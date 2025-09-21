@interface MLCConcatenationLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long dimension;

+ (id)layer;
+ (id)layerWithDimension:(unsigned long long)a0;
+ (char)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithDimension:(unsigned long long)a0;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (char)isStaticBatchSize;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
