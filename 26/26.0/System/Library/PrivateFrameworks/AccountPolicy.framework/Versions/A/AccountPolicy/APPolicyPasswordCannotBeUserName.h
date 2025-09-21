@interface APPolicyPasswordCannotBeUserName : APPolicy <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)policy;
+ (id)policyWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)init;

@end
