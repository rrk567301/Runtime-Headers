@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression

@property (retain, nonatomic) SCRCMathExpression *divisor;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;

@end
