@class NSString, NSDictionary, NSURL, NSURLRequest, AMSMetricsEvent;

@interface AMSUserNotificationAction : NSObject

@property (readonly) unsigned long long un_ActionOptions;
@property (retain) NSString *identifier;
@property (retain) NSString *clientIdentifier;
@property (retain) NSURL *defaultURL;
@property (retain) NSString *title;
@property (retain) NSURLRequest *request;
@property (retain) NSURL *mediaApiRequestURL;
@property (retain) NSString *systemImageName;
@property (copy) AMSMetricsEvent *metricsEvent;
@property (retain) NSDictionary *userInfo;
@property long long style;

- (id)initWithTitle:(id)a0;
- (id)init;
- (id)initWithTitle:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)generateUserInfoAction;
- (id)initWithUserInfoAction:(id)a0;

@end
