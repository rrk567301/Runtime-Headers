@interface SCRCMathRowExpression : SCRCMathArrayExpression

- (long long)integerValue;
- (char)isNumber;
- (char)isInteger;
- (char)beginsWithSpace;
- (void)_addSpacingAndChild:(id)a0 toResult:(id)a1 nextChild:(id)a2 previousChild:(id)a3 numberOfOuterRadicals:(unsigned long long)a4 treePosition:(id)a5;
- (id)_indexesOfCharactersInWords;
- (char)canBeUsedWithBase;
- (char)canBeUsedWithRange;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 parentTreePosition:(id)a2 childIndex:(unsigned long long *)a3;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (char)endsWithSpace;
- (unsigned long long)fractionLevel;
- (char)isFunctionName;
- (char)isWordOrAbbreviation;
- (id)latexDescriptionInMathMode:(char)a0;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;
- (id)speakableSummary;

@end
