@interface GESSAlgInverseRenderReport : GESSAlgReport

@property double parameterizeTime;
@property double dataConvertTime;
@property double textureOptimizationPreparationTime;
@property double textureOptimizationTime;
@property double buildMaterialMapsTime;
@property double totalTime;

- (id)init;

@end
