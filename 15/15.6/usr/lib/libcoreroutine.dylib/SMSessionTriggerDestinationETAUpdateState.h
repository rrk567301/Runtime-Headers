@interface SMSessionTriggerDestinationETAUpdateState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double distanceRemaining;
@property (nonatomic) double distanceDifference;
@property (nonatomic) double nominalTravelTimeRemaining;
@property (nonatomic) double nominalTravelTimeDifference;
@property (nonatomic) char nominalTravelTimeShorter;
@property (nonatomic) char remainingDistanceShorter;
@property (nonatomic) char shouldUpdateETAUpperBound;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDistanceRemaining:(double)a0 distanceDifference:(double)a1 nominalTravelTimeRemaining:(double)a2 nominalTravelTimeDifference:(double)a3 nominalTravelTimeShorter:(char)a4 remainingDistanceShorter:(char)a5 shouldUpdateETAUpperBound:(char)a6;

@end
