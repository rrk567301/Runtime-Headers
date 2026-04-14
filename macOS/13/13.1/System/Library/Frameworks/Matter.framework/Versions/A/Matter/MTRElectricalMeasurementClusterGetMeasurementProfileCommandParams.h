@class NSNumber;

@interface MTRElectricalMeasurementClusterGetMeasurementProfileCommandParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *numberOfIntervals;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
