@class NSString;

@interface SiriTTSAudioHardware : NSObject

@property (readonly) NSString *routeType;
@property (readonly) BOOL isBluetooth;
@property (readonly) BOOL isAppleProduct;
@property (readonly) long long vendorId;
@property (readonly) long long productId;

+ (id)defaultOutput;

- (void).cxx_destruct;
- (void)fetchHardwareInfo;

@end
