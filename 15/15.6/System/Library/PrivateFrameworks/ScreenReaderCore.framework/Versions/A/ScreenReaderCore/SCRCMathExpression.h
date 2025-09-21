@class NSArray, NSString;

@interface SCRCMathExpression : NSObject {
    unsigned long long _cachedMaximumDepth;
}

@property (weak, nonatomic) SCRCMathExpression *parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) char isRangeSubSuperscript;
@property (readonly, nonatomic) char canBeUsedWithRange;
@property (readonly, nonatomic) char isBaseSubSuperscript;
@property (readonly, nonatomic) char canBeUsedWithBase;
@property (readonly, nonatomic) char isNumber;
@property (readonly, nonatomic) char isInteger;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) char isNaturalSuperscript;
@property (readonly, nonatomic) char hasSimpleArrayOfChildren;
@property (readonly, nonatomic) char isEllipsis;
@property (readonly, nonatomic) char isTermSeparator;
@property (readonly, nonatomic) char isOperationSymbol;
@property (readonly, nonatomic) char isFenceDelimiter;
@property (readonly, nonatomic) char isFunctionName;
@property (readonly, nonatomic) char isWordOrAbbreviation;
@property (readonly, nonatomic) unsigned long long fractionLevel;
@property (readonly, nonatomic) char isSimpleNumericalFraction;
@property (readonly, nonatomic) char beginsWithSpace;
@property (readonly, nonatomic) char endsWithSpace;
@property (readonly, nonatomic) char isMultiRowTable;
@property (readonly, nonatomic) char isUnlinedFraction;
@property (readonly, nonatomic) NSString *latexFormatStringAsOver;
@property (readonly, nonatomic) NSString *latexFormatStringAsUnder;
@property (readonly, nonatomic) char canBeWrappedInLatexMathIndicators;
@property (readonly, nonatomic) char isNumberOverride;
@property (readonly, nonatomic) NSArray *siblings;
@property (readonly, nonatomic) NSArray *subExpressions;

+ (id)mathExpressionWithDictionary:(id)a0;
+ (Class)_classForExpressionType:(id)a0;
+ (void)setPathToSegmentOrderingPlist:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (id)speakableDescription;
- (id)fenceDelimiters;
- (id)localizedSegmentOrderingForKey:(id)a0;
- (void)_applyTreePositionOfOriginalSegment:(id)a0 toPrefixedOrSuffixedSegment:(id)a1;
- (id)_scrcBundle;
- (id)arrayWithoutNilsFromFirstChild:(id)a0 secondChild:(id)a1 thirdChild:(id)a2;
- (char)canFormWordStartingWithExpression:(id)a0;
- (id)dollarCodeDescription;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)a0 numberOfOuterRadicals:(unsigned long long)a1;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)a0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1 openOperator:(id)a2 openOperatorTreePosition:(id)a3 closeOperator:(id)a4 closeOperatorTreePosition:(id)a5;
- (id)latexDescription;
- (id)latexDescriptionForChildrenJoinedByString:(id)a0;
- (id)latexDescriptionInMathMode:(char)a0;
- (id)latexIdentifierForFenceOperator:(id)a0 isClosingOperator:(char)a1;
- (id)latexIdentifierForIdentifier:(id)a0;
- (id)latexMathModeDescription;
- (id)localizedAttributedStringForKey:(id)a0;
- (id)localizedAttributedStringForKey:(id)a0 treePosition:(id)a1;
- (id)localizedStringForNumber:(id)a0;
- (id)mathMLString;
- (unsigned long long)maximumDepth;
- (unsigned long long)maximumFractionLevelOfSubExpressions;
- (unsigned long long)numberOfTables;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(char)a1 isPartOfWord:(char)a2;
- (id)speakableSegments:(id)a0 withLocalizablePrefix:(id)a1 localizableSuffix:(id)a2;
- (id)speakableSegments:(id)a0 withPrefix:(id)a1 suffix:(id)a2;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)speakableSegmentsUpToDepth:(unsigned long long)a0;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2 localizablePrefix:(id)a3 localizableSuffix:(id)a4;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2 prefix:(id)a3 suffix:(id)a4;
- (id)speakableSummary;

@end
