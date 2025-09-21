@class PKProtobufCustomPrecisionAmount, NSString, PKProtobufShippingMethod, PKProtobufRecurringPaymentSummaryItem, PKProtobufNSDecimalNumber, PKProtobufAutomaticReloadPaymentSummaryItem, PKProtobufInstantFundsOutFeeSummaryItem, PKProtobufDeferredPaymentSummaryItem, PKProtobufDisbursementSummaryItem;

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int type;
@property (readonly, nonatomic) char hasRecurringPaymentSummaryItem;
@property (retain, nonatomic) PKProtobufRecurringPaymentSummaryItem *recurringPaymentSummaryItem;
@property (readonly, nonatomic) char hasDeferredPaymentSummaryItem;
@property (retain, nonatomic) PKProtobufDeferredPaymentSummaryItem *deferredPaymentSummaryItem;
@property (readonly, nonatomic) char hasCustomPrecisionAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (readonly, nonatomic) char hasDecimalAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAmount;
@property (readonly, nonatomic) char hasShippingMethodSummaryItem;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethodSummaryItem;
@property (readonly, nonatomic) char hasAutomaticReloadPaymentSummaryItem;
@property (retain, nonatomic) PKProtobufAutomaticReloadPaymentSummaryItem *automaticReloadPaymentSummaryItem;
@property (readonly, nonatomic) char hasDisbursementSummaryItem;
@property (retain, nonatomic) PKProtobufDisbursementSummaryItem *disbursementSummaryItem;
@property (readonly, nonatomic) char hasInstantFundsOutFeeSummaryItem;
@property (retain, nonatomic) PKProtobufInstantFundsOutFeeSummaryItem *instantFundsOutFeeSummaryItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
