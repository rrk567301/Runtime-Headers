@class NSString, BMWalletPaymentsCommerceClassicOrderShippingRecipient;

@interface BMWalletPaymentsCommerceClassicOrderShippingFulfillment : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *fulfillmentIdentifier;
@property (readonly, nonatomic) NSString *carrierIdentifier;
@property (readonly, nonatomic) BMWalletPaymentsCommerceClassicOrderShippingRecipient *shippingRecipient;
@property (readonly, nonatomic) NSString *trackingNumber;
@property (readonly, nonatomic) NSString *carrierName;
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
- (id)initWithFulfillmentIdentifier:(id)a0 trackingNumber:(id)a1 carrierName:(id)a2 carrierIdentifier:(id)a3 shippingRecipient:(id)a4;

@end
