@class WBSAllowedPasswordRule, NSArray, WBSMinLengthPasswordRule, WBSMaxLengthPasswordRule, WBSMaxConsecutivePasswordRule;

@interface WBSPasswordRuleSet : NSObject

@property (readonly, nonatomic) WBSAllowedPasswordRule *allowedRule;
@property (readonly, copy, nonatomic) NSArray *requiredRules;
@property (readonly, nonatomic) WBSMaxConsecutivePasswordRule *maxConsecutiveRule;
@property (readonly, nonatomic) WBSMinLengthPasswordRule *minLengthRule;
@property (readonly, nonatomic) WBSMaxLengthPasswordRule *maxLengthRule;

+ (id)ruleSetWithAllowedRule:(id)a0 requiredRules:(id)a1 maxConsecutiveRule:(id)a2;
+ (id)ruleSetWithAllowedRule:(id)a0 requiredRules:(id)a1 maxConsecutiveRule:(id)a2 minLengthRule:(id)a3 maxLengthRule:(id)a4;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)_characterClassesFromRuleDict:(id)a0;
- (id)initWithAllowedRule:(id)a0 requiredRules:(id)a1 maxConsecutiveRule:(id)a2 minLengthRule:(id)a3 maxLengthRule:(id)a4;

@end
