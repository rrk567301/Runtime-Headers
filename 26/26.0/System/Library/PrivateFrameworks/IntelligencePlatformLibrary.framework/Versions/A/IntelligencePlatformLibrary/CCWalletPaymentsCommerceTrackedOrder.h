@class NSString, NSArray, CCWalletPaymentsCommerceTrackedOrderMerchant, CCWalletPaymentsCommerceTrackedOrderCustomer, CCWalletPaymentsCommerceTrackedOrderPayment, NSDate;

@interface CCWalletPaymentsCommerceTrackedOrder : CCItemMessage {
    BOOL _hasRaw_orderUpdateDate;
    double _raw_orderUpdateDate;
}

@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSString *orderDate;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderMerchant *merchant;
@property (readonly, nonatomic) NSArray *shippingFulfillments;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderCustomer *customer;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderPayment *payment;
@property (readonly, nonatomic) NSDate *orderUpdateDate;
@property (readonly, nonatomic) NSString *trackedOrderIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)orderUpdateDate;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithOrderNumber:(id)a0 orderDate:(id)a1 merchant:(id)a2 shippingFulfillments:(id)a3 customer:(id)a4 payment:(id)a5 orderUpdateDate:(id)a6 trackedOrderIdentifier:(id)a7 error:(id *)a8;

@end
