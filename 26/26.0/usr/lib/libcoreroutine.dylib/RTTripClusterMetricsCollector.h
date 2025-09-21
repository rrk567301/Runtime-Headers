@interface RTTripClusterMetricsCollector : NSObject

@property (nonatomic) int clusterOrderDefault_totalNumberOfRoutes;
@property (nonatomic) int clusterOrderDefault_sumOfTraversalCountOfAllRoutes;
@property (nonatomic) int clusterOrderBeforeDrive_totalNumberOfRoutes;
@property (nonatomic) int clusterOrderBeforeDrive_sumOfTraversalCountOfAllRoutes;
@property (nonatomic) int clusterOrderAfterDrive_totalNumberOfRoutes;
@property (nonatomic) int clusterOrderAfterDrive_sumOfTraversalCountOfAllRoutes;
@property (nonatomic) int clusterOrderNoDrive_totalNumberOfRoutes;
@property (nonatomic) int clusterOrderNoDrive_sumOfTraversalCountOfAllRoutes;

- (id)init;

@end
