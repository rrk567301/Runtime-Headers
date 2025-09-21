@class NSString, _INPBDataString, _INPBValueMetadata;

@interface _INPBBillPayeeValue : PBCodable <_INPBBillPayeeValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accountNumber;
@property (readonly, nonatomic) char hasAccountNumber;
@property (retain, nonatomic) _INPBDataString *nickname;
@property (readonly, nonatomic) char hasNickname;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (readonly, nonatomic) char hasOrganizationName;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) char hasValueMetadata;
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
