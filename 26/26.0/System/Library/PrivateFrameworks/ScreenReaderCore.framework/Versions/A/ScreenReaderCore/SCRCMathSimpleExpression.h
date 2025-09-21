@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression

@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL isImplicit;
@property (readonly, nonatomic) BOOL isNumberOverride;

- (long long)integerValue;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isInteger;
- (void).cxx_destruct;
- (id)_functionNames;
- (BOOL)canBeUsedWithBase;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)isFunctionName;
- (BOOL)isWordOrAbbreviation;
- (id)latexMathModeDescription;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
