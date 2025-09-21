@class BMWalletPaymentsCommerceClassicOrderPayment, NSString, NSArray, NSDate, BMWalletPaymentsCommerceClassicOrderMerchant, BMWalletPaymentsCommerceClassicOrderCustomer;

@interface BMWalletPaymentsCommerceClassicOrder : BMEventBase <BMStoreData> {
    BOOL _hasRaw_orderDate;
    double _raw_orderDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMWalletPaymentsCommerceClassicOrderCustomer *customer;
@property (readonly, nonatomic) NSString *orderTypeIdentifier;
@property (readonly, nonatomic) NSString *orderIdentifier;
@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSDate *orderDate;
@property (readonly, nonatomic) BMWalletPaymentsCommerceClassicOrderMerchant *merchant;
@property (readonly, nonatomic) NSArray *shippingFulfillments;
@property (readonly, nonatomic) BMWalletPaymentsCommerceClassicOrderPayment *payment;
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
- (id)_shippingFulfillmentsJSONArray;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 orderNumber:(id)a2 orderDate:(id)a3 merchant:(id)a4 shippingFulfillments:(id)a5 customer:(id)a6 payment:(id)a7;

@end
