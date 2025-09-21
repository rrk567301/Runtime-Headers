@class _INPBValueMetadata, NSString;

@interface _INPBDecimalNumberValue : PBCodable <_INPBDecimalNumberValue, NSSecureCoding, NSCopying> {
    struct { unsigned char exponent : 1; unsigned char isNegative : 1; unsigned char mantissa : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int exponent;
@property (nonatomic) char hasExponent;
@property (nonatomic) char isNegative;
@property (nonatomic) char hasIsNegative;
@property (nonatomic) unsigned long long mantissa;
@property (nonatomic) char hasMantissa;
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
