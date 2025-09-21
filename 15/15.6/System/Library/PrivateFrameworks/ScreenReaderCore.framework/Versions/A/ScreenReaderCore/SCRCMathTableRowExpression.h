@interface SCRCMathTableRowExpression : SCRCMathArrayExpression

- (char)canBeWrappedInLatexMathIndicators;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexDescriptionInMathMode:(char)a0;
- (id)mathMLTag;

@end
