@class NSString, NSArray, INCodableLocalizationTable, NSDictionary;

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {
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

+ (id)__NameKey;
+ (id)__DisplayNameIDKey;
+ (id)__DisplayNameKey;
+ (id)__INCodableEnumValueIndexKey;
+ (id)__INCodableEnumValueDisplayNameKey;
+ (id)__INCodableEnumValueDisplayNameIDKey;
+ (id)__INCodableEnumValueSynonymsKey;
+ (id)__INCodableEnumValueNameKey;
+ (id)__ValuesKey;
+ (id)__TypeKey;
+ (id)__INCodableEnumValueSynonymSynonymKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintIDKey;
+ (id)__INCodableEnumValueSynonymSynonymIDKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)localizedDisplayNameWithLocalizer:(id)a0;
- (id)valueForIndex:(unsigned long long)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 displayNameID:(id)a2 enumNamespace:(id)a3 type:(long long)a4 values:(id)a5 localizationTable:(id)a6;
- (id)valuesByIndexForValues:(id)a0;

@end
