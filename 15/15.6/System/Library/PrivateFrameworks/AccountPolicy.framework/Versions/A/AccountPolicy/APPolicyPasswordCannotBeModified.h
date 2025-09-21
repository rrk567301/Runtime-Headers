@interface APPolicyPasswordCannotBeModified : APPolicy <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)policy;
+ (id)policyWithIdentifier:(id)a0;

- (id)init;
- (id)initWithIdentifier:(id)a0;

@end
