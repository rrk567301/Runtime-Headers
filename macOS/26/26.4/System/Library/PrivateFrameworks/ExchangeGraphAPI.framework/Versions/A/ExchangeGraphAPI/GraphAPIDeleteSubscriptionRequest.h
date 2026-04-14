@class NSString;

@interface GraphAPIDeleteSubscriptionRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *subscriptionId;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;

@end
