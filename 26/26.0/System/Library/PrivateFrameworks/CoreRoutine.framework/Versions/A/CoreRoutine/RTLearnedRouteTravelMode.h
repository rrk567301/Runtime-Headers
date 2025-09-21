@class NSArray, RTLearnedRouteMetrics;

@interface RTLearnedRouteTravelMode : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long routeTravelMode;
@property (readonly, nonatomic) float maxTravelTimeEstimateInSeconds;
@property (readonly, nonatomic) float minTravelTimeEstimateInSeconds;
@property (readonly, nonatomic) float meanTravelTimeEstimateInSeconds;
@property (readonly, nonatomic) float maxTravelledDistanceEstimateInMeters;
@property (readonly, nonatomic) float minTravelledDistanceEstimateInMeters;
@property (readonly, nonatomic) float meanTravelledDistanceEstimateInMeters;
@property (readonly, nonatomic) NSArray *routeLocations;
@property (readonly, nonatomic) NSArray *learnedRouteLocations;
@property (readonly, nonatomic) RTLearnedRouteMetrics *learnedRouteMetrics;

+ (double)deriveConfidenceFromRouteMetric:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRouteTravelMode:(long long)a0 maxTravelTimeEstimateInSeconds:(float)a1 minTravelTimeEstimateInSeconds:(float)a2 meanTravelTimeEstimateInSeconds:(float)a3 maxTravelledDistanceEstimateInMeters:(float)a4 minTravelledDistanceEstimateInMeters:(float)a5 meanTravelledDistanceEstimateInMeters:(float)a6 routeLocations:(id)a7 learnedRouteLocations:(id)a8 learnedRouteMetrics:(id)a9;

@end
