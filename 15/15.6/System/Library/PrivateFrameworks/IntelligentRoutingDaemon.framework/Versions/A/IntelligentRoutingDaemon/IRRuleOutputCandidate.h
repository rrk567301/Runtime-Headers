@class NSDictionary;

@interface IRRuleOutputCandidate : IRRuleOutput

@property (retain, nonatomic) NSDictionary *values;
@property (nonatomic) char isAnyCandidateEvaluatedToYes;

- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)a0;

@end
