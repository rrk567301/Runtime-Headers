@class _INPBStringValue, _INPBContactValue, NSString;

@interface _INPBDialingContactValue : PBCodable <_INPBDialingContactValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBContactValue *dialingContact;
@property (readonly, nonatomic) char hasDialingContact;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneLabel;
@property (readonly, nonatomic) char hasDialingPhoneLabel;
@property (retain, nonatomic) _INPBStringValue *dialingPhoneNumber;
@property (readonly, nonatomic) char hasDialingPhoneNumber;
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
