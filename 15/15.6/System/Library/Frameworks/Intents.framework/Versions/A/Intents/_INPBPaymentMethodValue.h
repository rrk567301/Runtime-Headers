@class NSString, _INPBImageValue, _INPBValueMetadata;

@interface _INPBPaymentMethodValue : PBCodable <_INPBPaymentMethodValue, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBImageValue *icon;
@property (readonly, nonatomic) char hasIcon;
@property (copy, nonatomic) NSString *identificationHint;
@property (readonly, nonatomic) char hasIdentificationHint;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasName;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
