@interface APPolicyMinimumUppercaseLetters : APPolicyMinimum <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)policyWithMinimum:(id)a0;
+ (id)policyWithIdentifier:(id)a0 andMinimum:(id)a1;

- (id)initWithIdentifier:(id)a0 andMinimum:(id)a1;
- (id)_contentForMinimum:(id)a0;
- (id)_contentDescriptionsForMinimum:(id)a0;
- (id)_parametersForMinimum:(id)a0;
- (id)initWithMinimum:(id)a0;

@end
