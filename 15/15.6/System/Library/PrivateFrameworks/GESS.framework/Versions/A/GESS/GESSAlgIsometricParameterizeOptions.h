@interface GESSAlgIsometricParameterizeOptions : GESSAlgParameterizeOptions

@property unsigned int targetNumOfCharts;
@property float maximumStretchRatio;
@property char enableParallel;
@property char skipInitialStretchOptimization;
@property unsigned int optimizeBoundaryIfFaceNumberLessThan;
@property char repairUVSelfIntersection;

- (id)init;

@end
