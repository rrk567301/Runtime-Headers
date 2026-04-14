@class GEOComposedRouteTraffic, NSArray, NSMutableDictionary;

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding> {
    NSMutableDictionary *_stepsIDToEVInfos;
    NSMutableDictionary *_legIndexToChargingStationInfos;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOComposedRouteTraffic *traffic;
@property (retain, nonatomic) NSArray *trafficDelayInfos;
@property (retain, nonatomic) NSArray *updateableCameraInfos;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateForRoute:(id)a0;
- (id)chargingStationInfoForLegIndex:(unsigned long long)a0;
- (id)evInfoForStepID:(unsigned long long)a0;
- (void)updateForRoute:(id)a0 etaRoute:(id)a1;

@end
