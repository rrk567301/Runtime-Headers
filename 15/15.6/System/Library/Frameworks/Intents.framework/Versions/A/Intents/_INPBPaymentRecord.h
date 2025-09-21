@class _INPBContact, NSString, _INPBCurrencyAmount, _INPBString, _INPBPaymentMethodValue;

@interface _INPBPaymentRecord : PBCodable <_INPBPaymentRecord, NSSecureCoding, NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) char hasCurrencyAmount;
@property (retain, nonatomic) _INPBCurrencyAmount *feeAmount;
@property (readonly, nonatomic) char hasFeeAmount;
@property (retain, nonatomic) _INPBString *note;
@property (readonly, nonatomic) char hasNote;
@property (retain, nonatomic) _INPBContact *payee;
@property (readonly, nonatomic) char hasPayee;
@property (retain, nonatomic) _INPBContact *payer;
@property (readonly, nonatomic) char hasPayer;
@property (retain, nonatomic) _INPBPaymentMethodValue *paymentMethod;
@property (readonly, nonatomic) char hasPaymentMethod;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;

@end
