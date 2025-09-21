@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) long long fontStyle;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (char)isNumber;
- (char)_isPrime;
- (char)canFormWordStartingWithExpression:(id)a0;
- (char)isNaturalSuperscript;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1 isPartOfWord:(char)a2;

@end
