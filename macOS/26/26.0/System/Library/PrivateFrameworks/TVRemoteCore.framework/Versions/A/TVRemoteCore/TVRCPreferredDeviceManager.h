@class TVRCPreferredDevice;

@interface TVRCPreferredDeviceManager : NSObject

@property (retain, nonatomic) TVRCPreferredDevice *device;
@property (readonly, nonatomic) TVRCPreferredDevice *preferredDevice;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setPreferredDevice:(id)a0;
- (id)preferredDeviceIdentifier;
- (double)preferredDeviceSearchTimeout;

@end
