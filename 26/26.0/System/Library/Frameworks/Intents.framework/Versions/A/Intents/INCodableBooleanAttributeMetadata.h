@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (copy, nonatomic) NSNumber *defaultValue;
@property (copy, nonatomic) NSString *falseDisplayName;
@property (copy, nonatomic) NSString *falseDisplayNameID;
@property (copy, nonatomic) NSString *trueDisplayName;
@property (copy, nonatomic) NSString *trueDisplayNameID;
@property (readonly, copy) NSString *localizedTrueDisplayName;
@property (readonly, copy) NSString *localizedFalseDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (void)encodeWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)__INCodableDescriptionFalseDisplayNameIDKey;
- (id)__INCodableDescriptionFalseDisplayNameKey;
- (id)__INCodableDescriptionTrueDisplayNameIDKey;
- (id)__INCodableDescriptionTrueDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameKey;
- (id)localizedFalseDisplayNameWithLocalizer:(id)a0;
- (id)localizedTrueDisplayNameWithLocalizer:(id)a0;

@end
