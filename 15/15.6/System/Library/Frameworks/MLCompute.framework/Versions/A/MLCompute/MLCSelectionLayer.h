@interface MLCSelectionLayer : MLCLayer

+ (id)layer;
+ (char)supportsDataType:(int)a0 onDevice:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (char)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;
- (id)summarizedDOTDescription;

@end
