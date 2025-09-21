@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBPaymentAmountValue, _INPBString, _INPBIntentMetadata, _INPBFinancialAccountValue;

@interface _INPBPayBillIntent : PBCodable <_INPBPayBillIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char billType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (readonly, nonatomic) char hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) char hasBillType;
@property (retain, nonatomic) _INPBDateTimeRange *dueDate;
@property (readonly, nonatomic) char hasDueDate;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (readonly, nonatomic) char hasFromAccount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
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
- (int)StringAsBillType:(id)a0;
- (id)billTypeAsString:(int)a0;

@end
