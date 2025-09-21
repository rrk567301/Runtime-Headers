@class GEOComposedRoute, MNDisplayETAInfo, NSUUID;

@interface MNVehicleParkingInfo : NSObject <NSSecureCoding> {
    NSUUID *_routeID;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long parkingType;
@property (retain, nonatomic) GEOComposedRoute *remainingWalkingRoute;
@property (retain, nonatomic) MNDisplayETAInfo *walkingRouteDisplayETAInfo;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
