@class NSString, NSArray, BMWalletPaymentsCommerceTrackedOrderShippingRecipient, NSDate;

@interface BMWalletPaymentsCommerceExtractedOrderShippingFulfillment : BMEventBase <BMStoreData> {
    BOOL _hasRaw_fulfillmentCreationDate;
    double _raw_fulfillmentCreationDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *fulfillmentIdentifier;
@property (readonly, nonatomic) NSString *carrierIdentifier;
@property (readonly, nonatomic) NSDate *fulfillmentCreationDate;
@property (readonly, nonatomic) NSArray *shippingEmails;
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
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderShippingRecipient *shippingRecipient;
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
- (id)_shippingEmailsJSONArray;
- (id)initWithFulfillmentIdentifier:(id)a0 status:(int)a1 trackingNumber:(id)a2 carrierName:(id)a3 carrierIdentifier:(id)a4 shippingMethod:(id)a5 shippingDate:(id)a6 shippingTime:(id)a7 estimatedDeliveryStartDate:(id)a8 estimatedDeliveryStartTime:(id)a9 estimatedDeliveryEndDate:(id)a10 estimatedDeliveryEndTime:(id)a11 deliveryDate:(id)a12 deliveryTime:(id)a13 shippingRecipient:(id)a14 fulfillmentCreationDate:(id)a15 shippingEmails:(id)a16;
- (id)initWithStatus:(int)a0 trackingNumber:(id)a1 carrierName:(id)a2 shippingMethod:(id)a3 shippingDate:(id)a4 shippingTime:(id)a5 estimatedDeliveryStartDate:(id)a6 estimatedDeliveryStartTime:(id)a7 estimatedDeliveryEndDate:(id)a8 estimatedDeliveryEndTime:(id)a9 deliveryDate:(id)a10 deliveryTime:(id)a11 shippingRecipient:(id)a12;

@end
