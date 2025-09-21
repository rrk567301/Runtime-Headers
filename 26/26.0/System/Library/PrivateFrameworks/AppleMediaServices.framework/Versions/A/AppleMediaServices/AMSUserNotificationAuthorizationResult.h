@class AMSEngagementRequest;

@interface AMSUserNotificationAuthorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long authorizationStatus;
@property (retain) AMSEngagementRequest *request;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
