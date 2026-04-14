@class RTDistanceCalculator, RTLocation, NSDate;

@interface RTPredictedLocationsOfInterestCriteria : NSObject <NSCopying> {
    RTDistanceCalculator *_distanceCalculator;
}

@property (retain, nonatomic) NSDate *referenceDate;
@property (nonatomic) double windowDuration;
@property (retain, nonatomic) RTLocation *referenceLocation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double maximumDistance;
@property (nonatomic) double minimumConfidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDistanceCalculator:(id)a0;
- (BOOL)evaluatePredictedLocationOfInterest:(id)a0;

@end
