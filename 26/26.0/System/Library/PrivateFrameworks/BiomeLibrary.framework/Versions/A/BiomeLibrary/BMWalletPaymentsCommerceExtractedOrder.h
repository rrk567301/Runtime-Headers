@class NSString, NSArray, BMWalletPaymentsCommerceTrackedOrderMerchant, BMWalletPaymentsCommerceTrackedOrderPayment, BMWalletPaymentsCommerceTrackedOrderCustomer, NSDate;

@interface BMWalletPaymentsCommerceExtractedOrder : BMEventBase <BMStoreData> {
    BOOL _hasRaw_orderUpdateDate;
    double _raw_orderUpdateDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isTrackedInWallet;
@property (nonatomic) BOOL hasIsTrackedInWallet;
@property (readonly, nonatomic) NSString *orderTypeIdentifier;
@property (readonly, nonatomic) NSString *orderIdentifier;
@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSArray *orderEmails;
@property (readonly, nonatomic) NSString *orderDate;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderMerchant *merchant;
@property (readonly, nonatomic) NSArray *shippingFulfillments;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderCustomer *customer;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderPayment *payment;
@property (readonly, nonatomic) NSDate *orderUpdateDate;
@property (readonly, nonatomic) NSString *trackedOrderIdentifier;
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
- (id)_orderEmailsJSONArray;
- (id)_shippingFulfillmentsJSONArray;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 orderNumber:(id)a2 orderEmails:(id)a3 orderDate:(id)a4 merchant:(id)a5 shippingFulfillments:(id)a6 customer:(id)a7 payment:(id)a8 isTrackedInWallet:(id)a9 orderUpdateDate:(id)a10;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 orderNumber:(id)a2 orderEmails:(id)a3 orderDate:(id)a4 merchant:(id)a5 shippingFulfillments:(id)a6 customer:(id)a7 payment:(id)a8 isTrackedInWallet:(id)a9 orderUpdateDate:(id)a10 trackedOrderIdentifier:(id)a11;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 orderNumber:(id)a2 orderEmails:(id)a3 orderDate:(id)a4 merchant:(id)a5 shippingFulfillments:(id)a6 customer:(id)a7 payment:(id)a8 orderUpdateDate:(id)a9 trackedOrderIdentifier:(id)a10;

@end
