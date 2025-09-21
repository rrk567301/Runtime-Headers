@class _INPBContact, NSString, _INPBString, _INPBCurrencyAmount, _INPBIntentMetadata;

@interface _INPBRequestPaymentIntent : PBCodable <_INPBRequestPaymentIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) char hasCurrencyAmount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBString *note;
@property (readonly, nonatomic) char hasNote;
@property (retain, nonatomic) _INPBContact *payer;
@property (readonly, nonatomic) char hasPayer;
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
