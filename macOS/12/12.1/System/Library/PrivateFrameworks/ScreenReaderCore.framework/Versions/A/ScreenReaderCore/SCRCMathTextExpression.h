@interface SCRCMathTextExpression : SCRCMathSimpleExpression

- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)mathMLString;
- (id)latexDescriptionInMathMode:(BOOL)a0;

@end
