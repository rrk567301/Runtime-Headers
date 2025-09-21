@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBPriceRangeValue : PBCodable <_INPBPriceRangeValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) char hasCurrencyCode;
@property (retain, nonatomic) _INPBDecimalNumberValue *maximumPrice;
@property (readonly, nonatomic) char hasMaximumPrice;
@property (retain, nonatomic) _INPBDecimalNumberValue *minimumPrice;
@property (readonly, nonatomic) char hasMinimumPrice;
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
