@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression

@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) char isImplicit;
@property (readonly, nonatomic) char isNumberOverride;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (long long)integerValue;
- (char)isInteger;
- (id)_functionNames;
- (char)canBeUsedWithBase;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (char)isFunctionName;
- (char)isWordOrAbbreviation;
- (id)latexMathModeDescription;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;

@end
