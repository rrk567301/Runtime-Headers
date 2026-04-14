@class NSString;

@interface GraphAPICreateSubscriptionRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *changeType;
@property (copy, nonatomic) NSString *notificationUrl;
@property (copy, nonatomic) NSString *subscriptionResource;
@property (copy, nonatomic) NSString *expirationDateTime;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;
- (id)_dateStringForDate:(id)a0;
- (void)setDefaultChangeType;
- (void)setDefaultExpirationDateTime;

@end
