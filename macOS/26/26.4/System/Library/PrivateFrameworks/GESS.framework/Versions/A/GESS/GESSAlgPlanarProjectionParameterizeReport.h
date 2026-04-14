@interface GESSAlgPlanarProjectionParameterizeReport : GESSAlgReport

@property double chartingTime;
@property double fixSelfIntersectionTime;
@property double packingTime;
@property unsigned int numOfCharts;
@property unsigned int numOfPackedTextures;
@property long long parameterizeStatus;

- (id)init;

@end
