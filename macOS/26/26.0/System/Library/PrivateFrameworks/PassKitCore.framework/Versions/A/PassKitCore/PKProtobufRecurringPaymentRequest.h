@class NSString, PKProtobufPaymentSummaryItem;

@interface PKProtobufRecurringPaymentRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPaymentDescription;
@property (retain, nonatomic) NSString *paymentDescription;
@property (readonly, nonatomic) BOOL hasRegularBilling;
@property (retain, nonatomic) PKProtobufPaymentSummaryItem *regularBilling;
@property (readonly, nonatomic) BOOL hasTrialBilling;
@property (retain, nonatomic) PKProtobufPaymentSummaryItem *trialBilling;
@property (readonly, nonatomic) BOOL hasBillingAgreement;
@property (retain, nonatomic) NSString *billingAgreement;
@property (readonly, nonatomic) BOOL hasManagementURL;
@property (retain, nonatomic) NSString *managementURL;
@property (readonly, nonatomic) BOOL hasTokenNotificationURL;
@property (retain, nonatomic) NSString *tokenNotificationURL;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
