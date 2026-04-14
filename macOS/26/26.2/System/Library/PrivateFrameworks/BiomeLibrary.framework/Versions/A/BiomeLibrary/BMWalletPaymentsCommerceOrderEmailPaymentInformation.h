@class NSString, BMWalletPaymentsCommerceOrderEmailPaymentInformationPaymentMethod;

@interface BMWalletPaymentsCommerceOrderEmailPaymentInformation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *totalAmount;
@property (readonly, nonatomic) NSString *totalCurrencyCode;
@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailPaymentInformationPaymentMethod *paymentMethod;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithTotalAmount:(id)a0 totalCurrencyCode:(id)a1 paymentMethod:(id)a2;

@end
