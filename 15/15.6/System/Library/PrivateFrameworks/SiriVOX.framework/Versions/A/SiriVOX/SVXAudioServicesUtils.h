@interface SVXAudioServicesUtils : NSObject

- (int)_activate;
- (char)audioServicesActivateWithTimeout;
- (char)shouldPrewarmAudioServicesActivate;

@end
