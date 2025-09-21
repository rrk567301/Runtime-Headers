@class _INPBValueMetadata, NSString;

@interface _INPBRangeValue : PBCodable <_INPBRangeValue, NSSecureCoding, NSCopying> {
    struct { unsigned char length : 1; unsigned char location : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long length;
@property (nonatomic) char hasLength;
@property (nonatomic) unsigned long long location;
@property (nonatomic) char hasLocation;
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
