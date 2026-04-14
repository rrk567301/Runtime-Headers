@class AMSEngagementRequest;

@interface AMSUserNotificationAuthorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long authorizationStatus;
@property (retain) AMSEngagementRequest *request;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
