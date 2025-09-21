@class _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata, NSString;

@interface _INPBBillDetailsValue : PBCodable <_INPBBillDetailsValue, NSSecureCoding, NSCopying> {
    struct { unsigned char billType : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBCurrencyAmountValue *amountDue;
@property (readonly, nonatomic) char hasAmountDue;
@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (readonly, nonatomic) char hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) char hasBillType;
@property (retain, nonatomic) _INPBDateTime *dueDate;
@property (readonly, nonatomic) char hasDueDate;
@property (retain, nonatomic) _INPBCurrencyAmountValue *lateFee;
@property (readonly, nonatomic) char hasLateFee;
@property (retain, nonatomic) _INPBCurrencyAmountValue *minimumDue;
@property (readonly, nonatomic) char hasMinimumDue;
@property (retain, nonatomic) _INPBDateTime *paymentDate;
@property (readonly, nonatomic) char hasPaymentDate;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsBillType:(id)a0;
- (id)billTypeAsString:(int)a0;

@end
