@class _INPBValueMetadata, NSString;

@interface _INPBSpeedValue : PBCodable <_INPBSpeedValue, NSSecureCoding, NSCopying> {
    struct { unsigned char magnitude : 1; unsigned char unit : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double magnitude;
@property (nonatomic) char hasMagnitude;
@property (nonatomic) int unit;
@property (nonatomic) char hasUnit;
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
- (int)StringAsUnit:(id)a0;
- (id)unitAsString:(int)a0;

@end
