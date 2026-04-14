@class NSUUID, NSArray, RTLearnedRouteLocation, CLLocation;

@interface RTLearnedRoute : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *learnedRouteIdentifier;
@property (readonly, nonatomic) CLLocation *learnedRouteStartLocation;
@property (readonly, nonatomic) RTLearnedRouteLocation *learnedRouteStartLocationWithReferenceFrame;
@property (readonly, nonatomic) CLLocation *learnedRouteEndLocation;
@property (readonly, nonatomic) RTLearnedRouteLocation *learnedRouteEndLocationWithReferenceFrame;
@property (readonly, nonatomic) NSArray *travelModeRoutes;
@property (readonly, nonatomic) float travelTimeEstimateForEntireRouteInSeconds;
@property (readonly, nonatomic) float travelledDistanceEstimateForEntireRouteInMeters;
@property (readonly, nonatomic) double likelihood;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLearnedRouteId:(id)a0 routeStartLocation:(id)a1 routeEndLocation:(id)a2 travelTimeEntireRouteSec:(float)a3 travelDistanceEntireRouteMeter:(float)a4 travelModeRoutes:(id)a5 routeStartLocationWithReferenceFrame:(id)a6 routeEndLocationWithReferenceFrame:(id)a7;
- (void)setLikelihood:(double)a0;

@end
