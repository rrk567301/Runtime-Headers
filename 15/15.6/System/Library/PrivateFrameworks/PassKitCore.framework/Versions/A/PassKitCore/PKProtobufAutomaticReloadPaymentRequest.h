@class NSString, PKProtobufPaymentSummaryItem;

@interface PKProtobufAutomaticReloadPaymentRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasPaymentDescription;
@property (retain, nonatomic) NSString *paymentDescription;
@property (readonly, nonatomic) char hasAutomaticPaymentBilling;
@property (retain, nonatomic) PKProtobufPaymentSummaryItem *automaticPaymentBilling;
@property (readonly, nonatomic) char hasBillingAgreement;
@property (retain, nonatomic) NSString *billingAgreement;
@property (readonly, nonatomic) char hasManagementURL;
@property (retain, nonatomic) NSString *managementURL;
@property (readonly, nonatomic) char hasTokenNotificationURL;
@property (retain, nonatomic) NSString *tokenNotificationURL;

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
