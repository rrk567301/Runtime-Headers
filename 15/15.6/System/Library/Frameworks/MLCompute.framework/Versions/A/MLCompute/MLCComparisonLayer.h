@interface MLCComparisonLayer : MLCLayer

@property (readonly, nonatomic) int operation;

+ (id)layerWithOperation:(int)a0;
+ (char)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)description;
- (id)initWithOperation:(int)a0;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
