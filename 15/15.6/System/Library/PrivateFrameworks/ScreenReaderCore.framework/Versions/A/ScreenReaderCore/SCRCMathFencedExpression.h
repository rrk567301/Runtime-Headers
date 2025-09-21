@class NSString;

@interface SCRCMathFencedExpression : SCRCMathRowExpression

@property (copy, nonatomic) NSString *openString;
@property (copy, nonatomic) NSString *closeString;
@property (readonly, nonatomic) char isClosingImplicit;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)mathMLAttributes;
- (id)_binomialCoefficientContent;
- (char)_isBinomialCoefficient;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)a0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (unsigned long long)fractionLevel;
- (id)latexDescriptionInMathMode:(char)a0;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;

@end
