@class NSNumber, NSArray;

@interface CHIPElectricalMeasurementClusterGetProfileInfoResponseCommandParams : NSObject

@property (retain, nonatomic) NSNumber *profileCount;
@property (retain, nonatomic) NSNumber *profileIntervalPeriod;
@property (retain, nonatomic) NSNumber *maxNumberOfIntervals;
@property (retain, nonatomic) NSArray *listOfAttributes;

- (id)init;
- (void).cxx_destruct;

@end
