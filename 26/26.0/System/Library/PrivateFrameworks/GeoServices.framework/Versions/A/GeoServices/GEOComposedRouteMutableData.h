@class NSArray, NSDictionary, GEOComposedRouteTraffic, GEOComposedETARoute;

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding> {
    NSDictionary *_stepsIDToEVInfos;
    NSDictionary *_legIndexToChargingStationInfos;
    NSDictionary *_originDisplayInfos;
    NSDictionary *_destinationDisplayInfos;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *routeOverviewDescriptionStrings;
@property (retain, nonatomic) GEOComposedRouteTraffic *traffic;
@property (retain, nonatomic) GEOComposedETARoute *etaRoute;
@property (retain, nonatomic) NSArray *trafficDelayInfos;
@property (retain, nonatomic) NSArray *updateableCameraInfos;
@property (copy, nonatomic) NSArray *rideSelections;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)chargingStationInfoForLegIndex:(unsigned long long)a0;
- (id)destinationDisplayInfoForLeg:(unsigned long long)a0;
- (id)evInfoForStepID:(unsigned long long)a0;
- (void)initializeForRoute:(id)a0;
- (id)originDisplayInfoForLeg:(unsigned long long)a0;
- (void)updateForRoute:(id)a0 etaRoute:(id)a1;

@end
