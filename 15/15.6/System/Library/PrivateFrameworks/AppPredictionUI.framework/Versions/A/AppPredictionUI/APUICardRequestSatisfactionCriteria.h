@interface APUICardRequestSatisfactionCriteria : NSObject

+ (id)compactSatisfactionCriteria;
+ (id)customIntentSatisfactionCriteria;
+ (id)generalSatisfactionCriteria;

- (char)canSatisfyCardRequest:(id)a0;
- (unsigned long long)servicePriorityForRequest:(id)a0;

@end
