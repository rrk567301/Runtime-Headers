@class BMWalletPaymentsCommerceOrderEmailPaymentInformation, NSString, BMWalletPaymentsCommerceOrderEmailMerchant, BMWalletPaymentsCommerceOrderEmailEmailMetadata, BMWalletPaymentsCommerceOrderEmailCustomer, BMWalletPaymentsCommerceOrderEmailShippingRecipient, BMWalletPaymentsCommerceOrderEmailShippingInformation;

@interface BMWalletPaymentsCommerceOrderEmail : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailEmailMetadata *emailMetadata;
@property (readonly, nonatomic) int emailType;
@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSString *orderDate;
@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailMerchant *merchant;
@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailCustomer *customer;
@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailShippingRecipient *shippingRecipient;
@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailShippingInformation *shippingInformation;
@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailPaymentInformation *paymentInformation;
@property (readonly, nonatomic) NSString *spotlightUniqueIdentifier;
@property (readonly, nonatomic) NSString *spotlightDomainIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmailMetadata:(id)a0 emailType:(int)a1 orderNumber:(id)a2 orderDate:(id)a3 merchant:(id)a4 customer:(id)a5 shippingRecipient:(id)a6 shippingInformation:(id)a7 paymentInformation:(id)a8 spotlightUniqueIdentifier:(id)a9 spotlightDomainIdentifier:(id)a10;

@end
