@class NSArray, NSString, NSData, NSNumber;

@interface MTROtaSoftwareUpdateProviderClusterQueryImageParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *productId;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSArray *protocolsSupported;
@property (copy, nonatomic) NSNumber *hardwareVersion;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSNumber *requestorCanConsent;
@property (copy, nonatomic) NSData *metadataForProvider;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
