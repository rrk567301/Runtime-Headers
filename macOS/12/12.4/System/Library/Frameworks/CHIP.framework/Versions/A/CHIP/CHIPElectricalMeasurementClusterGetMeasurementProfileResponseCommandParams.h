@class NSNumber, NSArray;

@interface CHIPElectricalMeasurementClusterGetMeasurementProfileResponseCommandParams : NSObject

@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *profileIntervalPeriod;
@property (retain, nonatomic) NSNumber *numberOfIntervalsDelivered;
@property (retain, nonatomic) NSNumber *attributeId;
@property (retain, nonatomic) NSArray *intervals;

- (id)init;
- (void).cxx_destruct;

@end
