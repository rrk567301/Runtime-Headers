@class SCRCMathExpression;

@interface SCRCMathUnderOverExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *under;
@property (retain, nonatomic) SCRCMathExpression *over;
@property (retain, nonatomic) SCRCMathExpression *base;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (unsigned long long)fractionLevel;
- (char)isRangeSubSuperscript;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)subExpressions;

@end
