@interface EWSPullSubscriptionRequestType : EWSBaseSubscriptionRequestType

@property (nonatomic) long long Timeout;
@property (nonatomic) char TimeoutIsSpecified;

+ (id)definition;

@end
