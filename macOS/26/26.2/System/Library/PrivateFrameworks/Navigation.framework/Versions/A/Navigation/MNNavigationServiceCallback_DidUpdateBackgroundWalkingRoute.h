@class MNActiveRouteInfo;

@interface MNNavigationServiceCallback_DidUpdateBackgroundWalkingRoute : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNActiveRouteInfo *routeInfo;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)type;
- (void).cxx_destruct;

@end
