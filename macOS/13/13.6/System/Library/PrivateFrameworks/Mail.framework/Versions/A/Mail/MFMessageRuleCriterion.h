@class MFMessageRule;

@interface MFMessageRuleCriterion : MFMessageCriterion

@property (weak, nonatomic) MFMessageRule *rule;

+ (id)noSentCriterion;
+ (id)noJunkCriterion;
+ (id)noTrashCriterion;

- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)setRuleType:(unsigned int)a0;
- (void)setCriterionIdentifier:(id)a0;
- (void)setRuleExpression:(id)a0;
- (void)setRuleQualifier:(unsigned int)a0;

@end
