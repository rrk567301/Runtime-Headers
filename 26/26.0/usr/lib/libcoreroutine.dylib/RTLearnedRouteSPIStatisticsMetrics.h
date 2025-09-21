@interface RTLearnedRouteSPIStatisticsMetrics : NSObject

@property BOOL isSPISuccess;
@property BOOL didSPIReturnDestinationVisit;
@property BOOL didSPIReturned2Routes;
@property BOOL didSPIReturned3Routes;
@property BOOL didSPIReturnNonVisit;
@property BOOL didSPIReturnODPair;
@property BOOL didSPIReturnOriginVisit;
@property int numSPIReturnWaypointsAvg;
@property int spiQueryType;
@property float spiResponseTime;
@property float spiReturnRouteLengthAvg;
@property float timeBetweenSPIQueries;
@property BOOL isSPIResponseRouteHighLikelihood;
@property BOOL isSPIResponseRouteLowLikelihood;
@property int fetchReasonCode;
@property BOOL isSPIBestRouteLikelihood;

- (id)init;
- (id)initForDefaultMetric;

@end
