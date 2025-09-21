@class NSString;

@interface BMWalletPaymentsCommerceOrderEmailShippingInformation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int status;
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
- (id)initWithStatus:(int)a0 trackingNumber:(id)a1 carrierName:(id)a2 shippingMethod:(id)a3 shippingDate:(id)a4 shippingTime:(id)a5 estimatedDeliveryStartDate:(id)a6 estimatedDeliveryStartTime:(id)a7 estimatedDeliveryEndDate:(id)a8 estimatedDeliveryEndTime:(id)a9 deliveryDate:(id)a10 deliveryTime:(id)a11;

@end
