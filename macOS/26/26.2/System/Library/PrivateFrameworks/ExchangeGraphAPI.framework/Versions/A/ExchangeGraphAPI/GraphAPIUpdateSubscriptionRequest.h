@class NSString;

@interface GraphAPIUpdateSubscriptionRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *subscriptionId;
@property (copy, nonatomic) NSString *changeType;
@property (copy, nonatomic) NSString *notificationUrl;
@property (copy, nonatomic) NSString *subscriptionResource;
@property (copy, nonatomic) NSString *expirationDateTime;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end
