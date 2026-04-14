@class MNActiveRouteInfo, NSString;

@interface MNNavigationServiceCallback_WillStartNavigation : MNNavigationServiceCallbackParameters

@property (nonatomic) long long navigationType;
@property (nonatomic) long long simulationType;
@property (retain, nonatomic) MNActiveRouteInfo *routeInfo;
@property (nonatomic) unsigned long long initialRouteSource;
@property (copy, nonatomic) NSString *voiceLanguage;
@property (nonatomic) BOOL isResumingMultiStopRoute;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
