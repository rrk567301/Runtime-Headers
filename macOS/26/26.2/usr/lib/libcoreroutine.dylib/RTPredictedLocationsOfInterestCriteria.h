@class NSString, RTLocation, RTDistanceCalculator, NSDate;

@interface RTPredictedLocationsOfInterestCriteria : NSObject <NSCopying> {
    RTDistanceCalculator *_distanceCalculator;
}

@property (retain, nonatomic) NSDate *referenceDate;
@property (nonatomic) double windowDuration;
@property (retain, nonatomic) RTLocation *referenceLocation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double maximumDistance;
@property (nonatomic) double minimumConfidence;
@property (retain, nonatomic) NSString *clientIdentifier;

- (BOOL)evaluatePredictedLocationOfInterest:(id)a0;
- (id)initWithDistanceCalculator:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
