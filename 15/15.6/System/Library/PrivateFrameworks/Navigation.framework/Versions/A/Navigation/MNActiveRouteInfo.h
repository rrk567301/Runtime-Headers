@class NSUUID, GEOComposedRoute, GEOComposedETARoute, MNDisplayETAInfo, MNRouteDistanceInfo, MNBatteryChargeInfo, GEOETATrafficUpdateResponse, GEOComposedRouteTraffic, GEOTransitRouteUpdateRequest;

@interface MNActiveRouteInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *routeID;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEOComposedETARoute *etaRoute;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic;
@property (retain, nonatomic) MNDisplayETAInfo *displayETAInfo;
@property (retain, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property (retain, nonatomic) MNBatteryChargeInfo *batteryChargeInfo;
@property (nonatomic) unsigned long long alternateRouteIndex;
@property (readonly, nonatomic) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRoute:(id)a0;
- (id)initWithRoute:(id)a0 trafficRoute:(id)a1 routeInitalizerData:(id)a2;

@end
