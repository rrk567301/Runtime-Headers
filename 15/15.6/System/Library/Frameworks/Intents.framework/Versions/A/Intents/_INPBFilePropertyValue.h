@class _INPBDateTimeRange, _INPBContact, NSString, _INPBLong, _INPBString;

@interface _INPBFilePropertyValue : PBCodable <_INPBFilePropertyValue, NSSecureCoding, NSCopying> {
    struct { unsigned char fileType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (readonly, nonatomic) char hasDateTime;
@property (nonatomic) int fileType;
@property (nonatomic) char hasFileType;
@property (retain, nonatomic) _INPBContact *person;
@property (readonly, nonatomic) char hasPerson;
@property (retain, nonatomic) _INPBLong *quantity;
@property (readonly, nonatomic) char hasQuantity;
@property (retain, nonatomic) _INPBString *value;
@property (readonly, nonatomic) char hasValue;
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
- (int)StringAsFileType:(id)a0;
- (id)fileTypeAsString:(int)a0;

@end
