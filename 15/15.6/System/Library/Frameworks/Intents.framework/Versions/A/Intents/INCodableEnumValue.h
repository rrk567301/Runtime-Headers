@class NSString, INCodableEnum, NSArray;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, INWidgetPlistRepresentable, NSSecureCoding, NSCopying, INCodableCoding>

@property (class, readonly) char supportsSecureCoding;

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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)__INCodableEnumDisplayNameIDKey;
- (char)_intents_compareValue:(id)a0 relation:(unsigned long long)a1;
- (id)__INCodableEnumDisplayNameKey;
- (id)__INCodableEnumIndexKey;
- (id)__INCodableEnumNameKey;
- (id)__INCodableEnumSynonymsKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)localizedDisplayNameForLanguage:(id)a0;
- (id)localizedDisplayNameWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;

@end
