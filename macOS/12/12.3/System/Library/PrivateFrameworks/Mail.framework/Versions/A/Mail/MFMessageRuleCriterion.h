@class MFMessageRule;

@interface MFMessageRuleCriterion : MFMessageCriterion

@property (weak, nonatomic) MFMessageRule *rule;

+ (id)noJunkCriterion;
+ (id)noTrashCriterion;
+ (id)noSentCriterion;

- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)setRuleType:(unsigned int)a0;
- (void)setCriterionIdentifier:(id)a0;
- (void)setRuleQualifier:(unsigned int)a0;
- (void)setRuleExpression:(id)a0;

@end
