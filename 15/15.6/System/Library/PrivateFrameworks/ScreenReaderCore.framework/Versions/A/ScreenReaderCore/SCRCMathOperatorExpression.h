@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) unsigned short operatorChar;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (char)_isRingOperator;
- (char)isTermSeparator;
- (char)_isFactorialSign;
- (char)_isIntegral;
- (char)_isInvisibleCharacter;
- (char)_isMinusSign;
- (char)_isSummation;
- (char)_isUnionOrIntersection;
- (char)canBeUsedWithRange;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (char)isEllipsis;
- (char)isFenceDelimiter;
- (char)isNaturalSuperscript;
- (char)isOperationSymbol;
- (id)latexFormatStringAsOver;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;

@end
