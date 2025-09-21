@class _INPBBillPayeeValue, _INPBDateTimeRange, NSString, _INPBIntentMetadata;

@interface _INPBSearchForBillsIntent : PBCodable <_INPBSearchForBillsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char billType : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (readonly, nonatomic) char hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) char hasBillType;
@property (retain, nonatomic) _INPBDateTimeRange *dueDateRange;
@property (readonly, nonatomic) char hasDueDateRange;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *paymentDateRange;
@property (readonly, nonatomic) char hasPaymentDateRange;
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
- (int)StringAsBillType:(id)a0;
- (id)billTypeAsString:(int)a0;

@end
