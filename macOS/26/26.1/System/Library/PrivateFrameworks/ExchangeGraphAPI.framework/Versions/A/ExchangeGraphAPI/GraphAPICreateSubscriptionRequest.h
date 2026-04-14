@class NSString;

@interface GraphAPICreateSubscriptionRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *changeType;
@property (copy, nonatomic) NSString *notificationUrl;
@property (copy, nonatomic) NSString *subscriptionResource;
@property (copy, nonatomic) NSString *expirationDateTime;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;
- (id)_dateStringForDate:(id)a0;
- (void)setDefaultChangeType;
- (void)setDefaultExpirationDateTime;

@end
