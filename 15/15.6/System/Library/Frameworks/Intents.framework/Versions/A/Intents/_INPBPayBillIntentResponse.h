@class _INPBBillDetailsValue, _INPBPaymentAmountValue, _INPBDateTimeRange, NSString, _INPBString, _INPBFinancialAccountValue;

@interface _INPBPayBillIntentResponse : PBCodable <_INPBPayBillIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBBillDetailsValue *billDetails;
@property (readonly, nonatomic) char hasBillDetails;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (readonly, nonatomic) char hasFromAccount;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property (readonly, nonatomic) char hasTransactionAmount;
@property (retain, nonatomic) _INPBString *transactionNote;
@property (readonly, nonatomic) char hasTransactionNote;
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property (readonly, nonatomic) char hasTransactionScheduledDate;
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
