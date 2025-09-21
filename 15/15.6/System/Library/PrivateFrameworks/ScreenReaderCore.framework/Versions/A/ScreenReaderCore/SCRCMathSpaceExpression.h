@interface SCRCMathSpaceExpression : SCRCMathExpression

- (id)initWithDictionary:(id)a0;
- (char)beginsWithSpace;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (char)endsWithSpace;
- (id)mathMLString;

@end
