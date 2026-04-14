@class NSString, BMWalletPaymentsCommerceTrackedOrderTransactionPaymentMethod;

@interface BMWalletPaymentsCommerceTrackedOrderTransaction : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *amount;
@property (readonly, nonatomic) NSString *isoCurrencyCode;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderTransactionPaymentMethod *paymentMethod;
@property (readonly, nonatomic) NSString *transactionIdenifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)initWithAmount:(id)a0 isoCurrencyCode:(id)a1 paymentMethod:(id)a2 transactionIdenifier:(id)a3;

@end
