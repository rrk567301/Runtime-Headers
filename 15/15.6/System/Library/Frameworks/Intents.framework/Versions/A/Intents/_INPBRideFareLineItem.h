@class NSString, _INPBDecimalNumberValue;

@interface _INPBRideFareLineItem : PBCodable <_INPBRideFareLineItem, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) char hasCurrencyCode;
@property (retain, nonatomic) _INPBDecimalNumberValue *price;
@property (readonly, nonatomic) char hasPrice;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasTitle;
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
