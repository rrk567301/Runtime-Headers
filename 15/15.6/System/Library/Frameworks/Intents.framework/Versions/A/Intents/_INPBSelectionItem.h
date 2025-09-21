@class NSString, _INPBIntentSlotValue;

@interface _INPBSelectionItem : PBCodable <_INPBSelectionItem, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) _INPBIntentSlotValue *value;
@property (readonly, nonatomic) char hasValue;
@property (copy, nonatomic) NSString *vocabularyValue;
@property (readonly, nonatomic) char hasVocabularyValue;
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
