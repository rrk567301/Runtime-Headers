@class MNActiveRouteInfo;

@interface MNNavigationServiceCallback_DidUpdateBackgroundWalkingRoute : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNActiveRouteInfo *routeInfo;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
