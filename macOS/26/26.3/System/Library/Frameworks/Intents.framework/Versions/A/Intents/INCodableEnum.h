@class NSString, NSArray, INCodableLocalizationTable, NSDictionary;

@interface INCodableEnum : NSObject <INWidgetPlistRepresentable, NSSecureCoding, NSCopying, INCodableCoding> {
    NSDictionary *_valuesByIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (copy, nonatomic, setter=_setEnumNamespace:) NSString *enumNamespace;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayNameID;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (id)__INCodableEnumValueDisplayNameKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintKey;
+ (id)__DisplayNameIDKey;
+ (id)__DisplayNameKey;
+ (id)__INCodableEnumValueDisplayNameIDKey;
+ (id)__ValuesKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintIDKey;
+ (id)__INCodableEnumValueNameKey;
+ (id)__NameKey;
+ (id)__INCodableEnumValueSynonymSynonymKey;
+ (id)__INCodableEnumValueIndexKey;
+ (id)__INCodableEnumValueSynonymSynonymIDKey;
+ (id)__INCodableEnumValueSynonymsKey;
+ (id)__TypeKey;

- (void)updateWithDictionary:(id)a0;
- (id)localizedDisplayNameWithLocalizer:(id)a0;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)valueForIndex:(unsigned long long)a0;
- (id)valuesByIndexForValues:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 displayNameID:(id)a2 enumNamespace:(id)a3 type:(long long)a4 values:(id)a5 localizationTable:(id)a6;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
