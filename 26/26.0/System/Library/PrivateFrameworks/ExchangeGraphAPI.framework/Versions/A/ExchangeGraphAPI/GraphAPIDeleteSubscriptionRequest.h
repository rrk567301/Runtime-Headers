@class NSString;

@interface GraphAPIDeleteSubscriptionRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *subscriptionId;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;

@end
