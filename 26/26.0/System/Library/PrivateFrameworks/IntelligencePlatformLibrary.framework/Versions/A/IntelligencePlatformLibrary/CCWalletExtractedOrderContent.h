@class NSString, NSArray, CCWalletPaymentsCommerceTrackedOrderMerchant, CCWalletPaymentsCommerceTrackedOrderCustomer, CCWalletPaymentsCommerceTrackedOrderPayment, NSDate;

@interface CCWalletExtractedOrderContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    BOOL _hasRaw_orderUpdateDate;
    double _raw_orderUpdateDate;
    BOOL _hasRaw_earliestEmailDateSent;
    double _raw_earliestEmailDateSent;
    BOOL _hasRaw_orderStatusUpdateDate;
    double _raw_orderStatusUpdateDate;
}

@property (readonly, nonatomic) NSString *orderTypeIdentifier;
@property (readonly, nonatomic) NSString *orderIdentifier;
@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSArray *orderEmails;
@property (readonly, nonatomic) NSString *orderDate;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderMerchant *merchant;
@property (readonly, nonatomic) NSArray *shippingFulfillments;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderCustomer *customer;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderPayment *payment;
@property (readonly, nonatomic) NSDate *orderUpdateDate;
@property (readonly, nonatomic) NSString *trackedOrderIdentifier;
@property (readonly, nonatomic) unsigned int orderStatus;
@property (readonly, nonatomic) NSDate *earliestEmailDateSent;
@property (readonly, nonatomic) NSDate *orderStatusUpdateDate;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)orderUpdateDate;
- (id)earliestEmailDateSent;
- (id)orderStatusUpdateDate;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 orderNumber:(id)a2 orderEmails:(id)a3 orderDate:(id)a4 merchant:(id)a5 shippingFulfillments:(id)a6 customer:(id)a7 payment:(id)a8 orderUpdateDate:(id)a9 trackedOrderIdentifier:(id)a10 error:(id *)a11;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 orderNumber:(id)a2 orderEmails:(id)a3 orderDate:(id)a4 merchant:(id)a5 shippingFulfillments:(id)a6 customer:(id)a7 payment:(id)a8 orderUpdateDate:(id)a9 trackedOrderIdentifier:(id)a10 orderStatus:(unsigned int)a11 earliestEmailDateSent:(id)a12 orderStatusUpdateDate:(id)a13 error:(id *)a14;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 orderNumber:(id)a2 orderEmails:(id)a3 orderDate:(id)a4 merchant:(id)a5 shippingFulfillments:(id)a6 customer:(id)a7 payment:(id)a8 orderUpdateDate:(id)a9 trackedOrderIdentifier:(id)a10 orderStatus:(unsigned int)a11 error:(id *)a12;

@end
