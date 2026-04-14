@class BMUAFAvailableAssetDailyStatus, NSString, BMUAFDeviceMetadata;

@interface BMAssetDeliveryDailyStatus : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMUAFDeviceMetadata *deviceMetadata;
@property (readonly, nonatomic) BMUAFAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)initWithDeviceMetadata:(id)a0 availableAssetDailyStatus:(id)a1;

@end
