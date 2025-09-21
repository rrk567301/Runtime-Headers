@interface MLCGatherLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long dimension;

+ (id)layerWithDimension:(unsigned long long)a0;

- (id)description;
- (id)initWithDimension:(unsigned long long)a0;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
