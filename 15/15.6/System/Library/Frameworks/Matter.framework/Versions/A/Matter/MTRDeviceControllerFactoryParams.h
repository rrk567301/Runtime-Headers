@class NSArray, NSNumber;
@protocol MTRStorage, MTROTAProviderDelegate;

@interface MTRDeviceControllerFactoryParams : NSObject

@property (nonatomic) char hasStorage;
@property (readonly, nonatomic) id<MTRStorage> storage;
@property (retain, nonatomic) id<MTROTAProviderDelegate> otaProviderDelegate;
@property (copy, nonatomic) NSArray *productAttestationAuthorityCertificates;
@property (copy, nonatomic) NSArray *certificationDeclarationCertificates;
@property (copy, nonatomic) NSNumber *port;
@property (nonatomic) char shouldStartServer;

- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;

@end
