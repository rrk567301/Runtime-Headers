@class NSArray, RTLocation;

@interface RTBluePOIMonitorEstimateUpdateNotification : RTNotification

@property (readonly, nonatomic) NSArray *inferredMapItems;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSArray *accessPoints;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInferredMapItems:(id)a0 referenceLocation:(id)a1 locations:(id)a2 accessPoints:(id)a3;

@end
