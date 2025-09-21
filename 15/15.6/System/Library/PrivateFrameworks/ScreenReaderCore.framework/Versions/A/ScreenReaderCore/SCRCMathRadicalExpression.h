@class SCRCMathExpression;

@interface SCRCMathRadicalExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *radicand;
@property (retain, nonatomic) SCRCMathExpression *rootIndex;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (char)_isCubeRoot;
- (char)_isSquareRoot;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (unsigned long long)fractionLevel;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)subExpressions;

@end
