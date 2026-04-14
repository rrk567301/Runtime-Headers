@class NSString, NSArray, BMWalletPaymentsCommerceTrackedOrderMerchant, BMWalletPaymentsCommerceTrackedOrderPayment, BMWalletPaymentsCommerceTrackedOrderCustomer, NSDate;

@interface BMWalletPaymentsCommerceTrackedOrder : BMEventBase <BMStoreData> {
    BOOL _hasRaw_orderUpdateDate;
    double _raw_orderUpdateDate;
    BOOL _hasRaw_earliestEmailDateSent;
    double _raw_earliestEmailDateSent;
    BOOL _hasRaw_orderStatusUpdateDate;
    double _raw_orderStatusUpdateDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isTrackedInWallet;
@property (nonatomic) BOOL hasIsTrackedInWallet;
@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSString *orderDate;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderMerchant *merchant;
@property (readonly, nonatomic) NSArray *shippingFulfillments;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderCustomer *customer;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderPayment *payment;
@property (readonly, nonatomic) NSDate *orderUpdateDate;
@property (readonly, nonatomic) NSString *trackedOrderIdentifier;
@property (readonly, nonatomic) int orderStatus;
@property (readonly, nonatomic) NSDate *earliestEmailDateSent;
@property (readonly, nonatomic) NSDate *orderStatusUpdateDate;
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
- (id)initWithOrderNumber:(id)a0 orderDate:(id)a1 merchant:(id)a2 shippingFulfillments:(id)a3 customer:(id)a4 payment:(id)a5 isTrackedInWallet:(id)a6 orderUpdateDate:(id)a7 trackedOrderIdentifier:(id)a8 orderStatus:(int)a9 earliestEmailDateSent:(id)a10 orderStatusUpdateDate:(id)a11;

@end
