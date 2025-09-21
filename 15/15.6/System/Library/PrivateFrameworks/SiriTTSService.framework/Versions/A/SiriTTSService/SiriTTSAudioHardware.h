@class NSString;

@interface SiriTTSAudioHardware : NSObject

@property (nonatomic) unsigned int audioDeviceID;
@property (readonly) NSString *routeType;
@property (readonly) char isBluetooth;
@property (readonly) char isAppleProduct;
@property (readonly) long long vendorId;
@property (readonly) long long productId;
@property (readonly) float volume;
@property (nonatomic) char duckOthers;

+ (id)defaultOutput;

- (void).cxx_destruct;
- (void)fetchHardwareInfo;

@end
