@interface TVRCPreferredDeviceManager : NSObject

+ (id)sharedInstance;

- (id)preferredDeviceIdentifier;
- (double)preferredDeviceSearchTimeout;
- (void)setPreferredDevice:(id)a0;

@end
