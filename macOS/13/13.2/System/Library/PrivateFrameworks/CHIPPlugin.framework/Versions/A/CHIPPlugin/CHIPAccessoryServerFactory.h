@class CHIPAccessoryServerBrowser;
@protocol HAPKeyStore;

@interface CHIPAccessoryServerFactory : HMFObject

@property (weak, nonatomic) CHIPAccessoryServerBrowser *browser;
@property (weak, nonatomic) id<HAPKeyStore> keystore;

+ (id)logCategory;
+ (id)createInfoService:(id)a0 model:(id)a1 manufacturer:(id)a2 serialNumber:(id)a3 instanceID:(long long)a4 endpointID:(id)a5;
+ (id)createInfoService:(id)a0 model:(id)a1 manufacturer:(id)a2 serialNumber:(id)a3 instanceID:(unsigned long long)a4 endpointID:(id)a5 nodeID:(id)a6 legacyInstanceIDAssignment:(BOOL)a7;
+ (id)createFirmwareUpdateService:(long long)a0;
+ (id)createCHIPPluginHAPServiceCommon:(id)a0 characteristics:(id)a1 serviceInstanceID:(id)a2 endpointID:(id)a3 nodeID:(id)a4 topology:(id)a5;
+ (id)instanceIDForCharacteristicType:(id)a0 serviceType:(id)a1 endpointID:(id)a2 nodeID:(id)a3;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithKeystore:(id)a0 browser:(id)a1;
- (id)vendAccessoryServerWithNodeID:(id)a0 setupCode:(id)a1 discriminator:(id)a2 category:(id)a3 vendorID:(id)a4 productID:(id)a5 serialNumber:(id)a6 firmwareRevision:(id)a7;

@end
