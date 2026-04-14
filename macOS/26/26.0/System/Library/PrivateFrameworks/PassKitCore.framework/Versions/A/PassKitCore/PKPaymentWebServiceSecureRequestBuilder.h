@class NSArray, PKPaymentDeviceMetadata;

@interface PKPaymentWebServiceSecureRequestBuilder : PKPaymentWebServiceRequestBuilder

@property (readonly, nonatomic) BOOL devSigned;
@property (readonly, nonatomic) NSArray *certificates;
@property (readonly, nonatomic) PKPaymentDeviceMetadata *deviceData;

- (id)init;
- (void).cxx_destruct;
- (void)configureOverlayRequest:(id)a0 urlRequest:(id)a1 secureDictionary:(id)a2 dictionary:(id)a3;
- (void)_encryptDictionary:(id)a0 intoDictionary:(id)a1 encryptedContentKey:(id)a2;
- (void)_encryptedData:(id)a0 intoDictionary:(id)a1 encryptedContentKey:(id)a2 scheme:(id)a3 certificates:(id)a4;
- (id)createEncryptedDictionary:(id)a0 encryptedContentKey:(id)a1;
- (id)createEncryptedDictionaryWithData:(id)a0 encryptedContentKey:(id)a1;
- (id)createEncryptedDictionaryWithData:(id)a0 encryptedContentKey:(id)a1 scheme:(id)a2 certificates:(id)a3;
- (id)initWithBrokerURL:(id)a0 deviceID:(id)a1;
- (id)initWithRequestBuilder:(id)a0 devSigned:(BOOL)a1 certificates:(id)a2 deviceData:(id)a3;
- (void)insertFraudDeviceForField:(unsigned long long)a0 dictionary:(id)a1;

@end
