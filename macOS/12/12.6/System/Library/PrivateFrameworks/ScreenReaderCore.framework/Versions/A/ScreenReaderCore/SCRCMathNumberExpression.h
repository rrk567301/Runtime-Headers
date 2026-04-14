@interface SCRCMathNumberExpression : SCRCMathSimpleExpression

- (BOOL)isNumber;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)mathMLString;

@end
