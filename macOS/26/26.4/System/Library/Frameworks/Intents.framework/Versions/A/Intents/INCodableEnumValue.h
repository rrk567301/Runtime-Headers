@class NSString, INCodableEnum, NSArray;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, INWidgetPlistRepresentable, NSSecureCoding, NSCopying, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, setter=_setCodableEnum:) INCodableEnum *_codableEnum;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocID;
@property (retain, nonatomic) NSArray *synonyms;
@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void)updateWithDictionary:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableEnumSynonymsKey;
- (BOOL)_intents_compareValue:(id)a0 relation:(unsigned long long)a1;
- (id)__INCodableEnumDisplayNameIDKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDisplayNameForLanguage:(id)a0;
- (id)__INCodableEnumNameKey;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)__INCodableEnumDisplayNameKey;
- (id)__INCodableEnumIndexKey;
- (id)localizedDisplayNameWithLocalizer:(id)a0;
- (id)initWithCoder:(id)a0;

@end
