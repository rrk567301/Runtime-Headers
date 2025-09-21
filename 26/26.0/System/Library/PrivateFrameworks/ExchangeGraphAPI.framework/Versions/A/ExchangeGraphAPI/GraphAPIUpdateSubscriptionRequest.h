@class NSString;

@interface GraphAPIUpdateSubscriptionRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *subscriptionId;
@property (copy, nonatomic) NSString *changeType;
@property (copy, nonatomic) NSString *notificationUrl;
@property (copy, nonatomic) NSString *subscriptionResource;
@property (copy, nonatomic) NSString *expirationDateTime;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end
