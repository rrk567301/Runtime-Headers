@class NSString, NSArray;

@interface BMWalletPaymentsCommerceTrackedOrderPayment : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *totalAmount;
@property (readonly, nonatomic) NSString *totalIsoCurrencyCode;
@property (readonly, nonatomic) NSArray *transactions;
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
- (id)_transactionsJSONArray;
- (id)initWithTotalAmount:(id)a0 totalIsoCurrencyCode:(id)a1 transactions:(id)a2;

@end
