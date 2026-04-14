@class RTLocation, NSDate;

@interface RTPredictedDatesCriteria : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *referenceDate;
@property (nonatomic) double windowDuration;
@property (retain, nonatomic) RTLocation *referenceLocation;
@property (nonatomic) double minimumConfidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)evaluatePredictedDate:(id)a0;

@end
