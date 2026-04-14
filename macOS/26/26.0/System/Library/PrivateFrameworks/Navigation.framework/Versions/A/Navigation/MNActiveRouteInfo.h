@class NSUUID, GEOComposedRoute, GEOComposedETARoute, MNDisplayETAInfo, MNRouteDistanceInfo, MNBatteryChargeInfo, GEOETATrafficUpdateResponse, GEOComposedRouteTraffic, GEOTransitRouteUpdateRequest;

@interface MNActiveRouteInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *routeID;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic;
@property (readonly, nonatomic) GEOComposedETARoute *etaRoute;
@property (readonly, nonatomic) GEOETATrafficUpdateResponse *etaResponse;
@property (readonly, nonatomic) unsigned long long alternateRouteIndex;
@property (retain, nonatomic) MNDisplayETAInfo *displayETAInfo;
@property (retain, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property (retain, nonatomic) MNBatteryChargeInfo *batteryChargeInfo;
@property (readonly, nonatomic) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;

+ (BOOL)saveRoutesToDiskInsteadXPC;

- (id)initWithRoute:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateWithETARoute:(id)a0 etaResponse:(id)a1;
- (id)initWithRoute:(id)a0 etaResponse:(id)a1 alternateRouteIndex:(unsigned long long)a2;

@end
