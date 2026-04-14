@interface GESSAlgAdaptiveQuadModelConvertReport : GESSAlgReport

@property double preProcessingTime;
@property double tangentialFieldTime;
@property double deformationTime;
@property double quadrangulationTime;
@property double discretizationTime;
@property double quadComponentsMergingTime;
@property double bakingTime;
@property double totalTime;
@property unsigned int numOfOutputComponents;
@property unsigned int numOfSingularity;
@property unsigned int numOfIntegerVariables;
@property unsigned int numOfTotalVariables;
@property float qualityMetricSolverMAE;
@property float qualityMetricAngleMean;
@property float qualityMetricAngleSTD;

- (id)init;

@end
