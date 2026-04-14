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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
