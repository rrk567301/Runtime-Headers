@class NSString, NSArray;

@interface SAAppSubscription : SADomainObject <SABackgroundContextObject>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSArray *subscriptionTiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appSubscriptionWithDictionary:(id)a0 context:(id)a1;
+ (id)appSubscription;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
