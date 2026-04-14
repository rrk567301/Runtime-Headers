@class MNBatteryChargeInfo, MNDisplayETAInfo, MNRouteDistanceInfo;

@interface MNNavigationServiceCallback_DidUpdateDisplayETA : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNBatteryChargeInfo *batteryChargeInfo;
@property (retain, nonatomic) MNDisplayETAInfo *displayETAInfo;
@property (retain, nonatomic) MNRouteDistanceInfo *routeDistanceInfo;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)type;
- (void).cxx_destruct;

@end
