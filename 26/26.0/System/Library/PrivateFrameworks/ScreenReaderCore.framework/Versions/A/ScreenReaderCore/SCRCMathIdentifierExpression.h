@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) long long fontStyle;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isNumber;
- (BOOL)_isPrime;
- (BOOL)canFormWordStartingWithExpression:(id)a0;
- (BOOL)isNaturalSuperscript;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1 isPartOfWord:(BOOL)a2;

@end
