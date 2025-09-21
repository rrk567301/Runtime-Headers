@class NSString, _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@interface _INPBLocalizedProject : PBCodable <_INPBLocalizedProject, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAppNames *appNames;
@property (readonly, nonatomic) char hasAppNames;
@property (retain, nonatomic) _INPBIntentVocabulary *intentVocabulary;
@property (readonly, nonatomic) char hasIntentVocabulary;
@property (retain, nonatomic) _INPBLanguageTag *language;
@property (readonly, nonatomic) char hasLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
