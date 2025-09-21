@class MNActiveRouteInfo, NSString;

@interface MNNavigationServiceCallback_WillStartNavigation : MNNavigationServiceCallbackParameters

@property (nonatomic) long long navigationType;
@property (nonatomic) long long simulationType;
@property (retain, nonatomic) MNActiveRouteInfo *routeInfo;
@property (nonatomic) unsigned long long initialRouteSource;
@property (copy, nonatomic) NSString *voiceLanguage;
@property (nonatomic) BOOL isResumingMultiStopRoute;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
