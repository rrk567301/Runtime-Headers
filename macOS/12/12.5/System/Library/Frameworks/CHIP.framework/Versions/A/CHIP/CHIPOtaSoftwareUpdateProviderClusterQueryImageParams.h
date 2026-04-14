@class NSArray, NSString, NSData, NSNumber;

@interface CHIPOtaSoftwareUpdateProviderClusterQueryImageParams : NSObject

@property (retain, nonatomic) NSNumber *vendorId;
@property (retain, nonatomic) NSNumber *productId;
@property (retain, nonatomic) NSNumber *softwareVersion;
@property (retain, nonatomic) NSArray *protocolsSupported;
@property (retain, nonatomic) NSNumber *hardwareVersion;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSNumber *requestorCanConsent;
@property (retain, nonatomic) NSData *metadataForProvider;

- (id)init;
- (void).cxx_destruct;

@end
