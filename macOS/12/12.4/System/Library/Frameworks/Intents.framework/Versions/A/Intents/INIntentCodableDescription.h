@class NSString, NSArray, INCodableAttribute, NSNumber;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName;
@property (copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocID;
@property (copy, nonatomic) NSString *descriptiveText;
@property (copy, nonatomic) NSString *descriptiveTextLocID;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic) BOOL userConfirmationRequired;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic, getter=isDeprecated) BOOL deprecated;
@property (nonatomic, getter=isConfigurable) BOOL configurable;
@property (nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions;
@property (nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets;
@property (readonly, nonatomic) INCodableAttribute *inputAttribute;
@property (readonly, nonatomic) INCodableAttribute *keyAttribute;
@property (retain, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSNumber *versioningHash;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSString *localizedDescriptiveText;
@property (copy, nonatomic) NSArray *entityVerbs;

+ (id)__NameKey;
+ (id)__NameKey;
+ (id)__Key;
+ (id)__ParameterKey;
+ (id)__ParametersKey;
+ (id)__ClassNameKey;
+ (id)__ClassPrefixKey;
+ (id)__DescriptionKey;
+ (id)__SummaryKey;
+ (id)__TitleKey;
+ (id)__TitleIDKey;
+ (id)__DescriptionIDKey;
+ (id)__VerbKey;
+ (id)__CategoryKey;
+ (id)__DefaultImageNameKey;
+ (id)__UserConfirmationRequiredKey;
+ (id)__ConfigurableKey;
+ (id)__DeprecatedKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__InputKey;
+ (id)__KeyParameterKey;
+ (id)__VerbAssociationsKey;
+ (id)__EntityKey;
+ (id)__PhrasesKey;
+ (id)__ForegroundKey;
+ (id)__HashKey;
+ (id)_intentClassNameWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributes;
- (id)_attributeKey;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)_updateWithIntentCodableDescription:(id)a0;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (id)_attributesKey;
- (id)_ignoredAttributeTags;
- (id)localizedTitleWithLocalizer:(id)a0;
- (id)localizedDescriptiveTextWithLocalizer:(id)a0;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)a0;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;

@end
