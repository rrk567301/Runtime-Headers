@interface SPTrackingAvoidancePolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) double expiryTimeInterval;
@property (nonatomic) double purgeTimeInterval;
@property (nonatomic) double keepAliveInterval;
@property (nonatomic) double minimumStagingInterval;
@property (nonatomic) long long stagingBackstopHour;
@property (nonatomic) long long assumedKeyRollHour;
@property (nonatomic) double scanInterval;
@property (nonatomic) char surfaceImmediatelyBetweenBackstopAndKeyroll;
@property (nonatomic) double maxExpectedWildInterval;
@property (nonatomic) char shouldAlertImmediatelyForImmediateTypes;
@property (nonatomic) double durationOfConsideration;
@property (nonatomic) double thresholdOfLocationRelevance;
@property (nonatomic) double thresholdOfSignificantDuration;
@property (nonatomic) double thresholdOfSignificantDistance;
@property (nonatomic) double capOfReasonableWalkingSpeed;
@property (nonatomic) char allowNavGeoHintAsPrivateVehicleHint;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 expiryTimeInterval:(double)a1 keepAliveInterval:(double)a2 minimumStagingInterval:(double)a3 stagingBackstopHour:(long long)a4 assumedKeyRollHour:(long long)a5 scanInterval:(double)a6 surfaceImmediatelyBetweenBackstopAndKeyroll:(char)a7 maxExpectedWildInterval:(double)a8 shouldAlertImmediatelyForImmediateTypes:(char)a9 durationOfConsideration:(double)a10 thresholdOfLocationRelevance:(double)a11 thresholdOfSignificantDuration:(double)a12 thresholdOfSignificantDistance:(double)a13 capOfReasonableWalkingSpeed:(double)a14 allowNavGeoHintAsPrivateVehicleHint:(char)a15;

@end
