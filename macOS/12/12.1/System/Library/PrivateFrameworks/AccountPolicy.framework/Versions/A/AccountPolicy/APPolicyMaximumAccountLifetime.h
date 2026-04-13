@interface APPolicyMaximumAccountLifetime : APPolicyMaximum <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)policyWithMaximum:(id)a0;
+ (id)policyWithIdentifier:(id)a0 andMaximum:(id)a1;

- (id)initWithIdentifier:(id)a0 andMaximum:(id)a1;
- (id)_contentForMaximum:(id)a0;
- (id)_parametersForMaximum:(id)a0;
- (id)initWithMaximum:(id)a0;

@end
