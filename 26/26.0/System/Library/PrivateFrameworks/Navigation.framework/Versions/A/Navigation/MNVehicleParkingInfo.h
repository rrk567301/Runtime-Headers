@class GEOComposedRoute, MNDisplayETAInfo, NSUUID;

@interface MNVehicleParkingInfo : NSObject <NSSecureCoding> {
    NSUUID *_routeID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long parkingType;
@property (retain, nonatomic) GEOComposedRoute *remainingWalkingRoute;
@property (retain, nonatomic) MNDisplayETAInfo *walkingRouteDisplayETAInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
