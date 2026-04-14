@class NSString;

@interface CCWalletPaymentsCommerceOrderEmailShippingInformation : CCItemMessage

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

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithStatus:(unsigned int)a0 trackingNumber:(id)a1 carrierName:(id)a2 shippingMethod:(id)a3 shippingDate:(id)a4 shippingTime:(id)a5 estimatedDeliveryStartDate:(id)a6 estimatedDeliveryStartTime:(id)a7 estimatedDeliveryEndDate:(id)a8 estimatedDeliveryEndTime:(id)a9 deliveryDate:(id)a10 deliveryTime:(id)a11 error:(id *)a12;

@end
