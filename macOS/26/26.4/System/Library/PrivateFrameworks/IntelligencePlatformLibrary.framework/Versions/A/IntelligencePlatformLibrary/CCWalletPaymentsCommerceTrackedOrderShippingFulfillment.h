@class NSString, CCWalletPaymentsCommerceTrackedOrderShippingRecipient;

@interface CCWalletPaymentsCommerceTrackedOrderShippingFulfillment : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int status;
@property (readonly, nonatomic) NSString *trackingNumber;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSString *shippingMethod;
@property (readonly, nonatomic) NSString *shippingDate;
@property (readonly, nonatomic) NSString *shippingTime;
@property (readonly, nonatomic) NSString *estimatedDeliveryStartDate;
@property (readonly, nonatomic) NSString *estimatedDeliveryStartTime;
@property (readonly, nonatomic) NSString *estimatedDeliveryEndDate;
@property (readonly, nonatomic) NSString *estimatedDeliveryEndTime;
@property (readonly, nonatomic) NSString *deliveryDate;
@property (readonly, nonatomic) NSString *deliveryTime;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderShippingRecipient *shippingRecipient;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithStatus:(unsigned int)a0 trackingNumber:(id)a1 carrierName:(id)a2 shippingMethod:(id)a3 shippingDate:(id)a4 shippingTime:(id)a5 estimatedDeliveryStartDate:(id)a6 estimatedDeliveryStartTime:(id)a7 estimatedDeliveryEndDate:(id)a8 estimatedDeliveryEndTime:(id)a9 deliveryDate:(id)a10 deliveryTime:(id)a11 shippingRecipient:(id)a12 error:(id *)a13;

@end
