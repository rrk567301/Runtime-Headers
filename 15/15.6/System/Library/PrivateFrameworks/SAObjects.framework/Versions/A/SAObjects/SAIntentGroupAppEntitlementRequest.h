@class NSString;

@interface SAIntentGroupAppEntitlementRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;

+ (id)appEntitlementRequestWithDictionary:(id)a0 context:(id)a1;
+ (id)appEntitlementRequest;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
