@class NSString, NSArray, NSDictionary, NSLocale;

@interface TIInputMode : NSObject <NSCopying> {
    NSString *_languageWithRegion;
    NSString *_variant;
    NSLocale *_locale;
    Class _inputManagerClass;
    Class _keyboardFeatureSpecializationClass;
    Class _multilingualInputManagerClass;
}

@property (readonly, nonatomic) NSString *normalizedIdentifier;
@property (copy, nonatomic) NSString *originalIdentifier;
@property (readonly, nonatomic) NSString *languageWithRegion;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) NSArray *additionalConfiguredLatinLanguages;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *preferredModelLocaleIdentifier;
@property (readonly, nonatomic) char preferredModelLocaleIsMultilingual;
@property (readonly, nonatomic) char isSiriMode;
@property (readonly, nonatomic) Class inputManagerClass;
@property (readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property (readonly, nonatomic) Class multilingualInputManagerClass;
@property (readonly, nonatomic) char supportsPrediction;
@property (readonly, nonatomic) char supportsMultilingualKeyboard;
@property (readonly, nonatomic) char wantsMultilingualUnionOVS;
@property (readonly, nonatomic) char spaceAutocorrectionEnabled;
@property (readonly, nonatomic) char typedStringLMRankingEnabled;
@property (readonly, nonatomic) NSString *replacementForDoubleSpace;
@property (readonly, nonatomic) char doesComposeText;
@property (readonly, nonatomic) char deletesByComposedCharacterSequence;
@property (readonly, nonatomic) NSArray *allAccentKeyStrings;
@property (readonly, nonatomic) NSDictionary *layoutTags;
@property (readonly, nonatomic) NSDictionary *compositionMap;
@property (readonly, nonatomic) NSDictionary *reverseCompositionMap;
@property (readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property (readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property (readonly, nonatomic) NSString *wordMedialPunctuationCharacters;
@property (readonly, nonatomic) NSString *spaceDeletingCharacters;
@property (readonly, nonatomic) NSString *autocorrectionLocaleIdentifier;
@property (readonly, nonatomic) char doesSupportInlineCompletion;

+ (id)inputModeWithIdentifier:(id)a0;
+ (id)inputModeWithIdentifier:(id)a0 isSiriMode:(char)a1;
+ (id)inputModeWithIdentifier:(id)a0 isSiriMode:(char)a1 originalIdentifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNormalizedIdentifier:(id)a0;
- (id)initWithNormalizedIdentifier:(id)a0 isSiriMode:(char)a1;
- (Class)keyboardFeatureSpecializationClassFromInputModeProperties;
- (id)preferredMultilingualLanguageModelLocale;
- (void)setQuickTypeKeyboardFeatureSpecializationClass;

@end
