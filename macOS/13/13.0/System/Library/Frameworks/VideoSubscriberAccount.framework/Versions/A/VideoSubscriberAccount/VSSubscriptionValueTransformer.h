@interface VSSubscriptionValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (BOOL)_subscriptionIsCoreSpotlight:(id)a0;
+ (id)_legacySubscriptionInfoForUserAccount:(id)a0;
+ (id)_userAccountWithLegacySubscriptionPrimitives:(id)a0;
+ (void)_updateUserAccount:(id)a0 fromJSONWithSubscription:(id)a1;
+ (id)_subscriptionForUserAccount:(id)a0;

- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
