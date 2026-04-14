@interface GESSAlgAdaptiveCubeInferenceReport : GESSAlgReport

@property double totalTime;
@property double dataConvertTime;
@property double constructVerticesAndFacesTime;
@property double constructMeshTime;

- (id)init;

@end
