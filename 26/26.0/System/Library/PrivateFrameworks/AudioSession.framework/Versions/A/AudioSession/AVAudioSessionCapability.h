@interface AVAudioSessionCapability : NSObject

@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (id)initWithIsSupported:(BOOL)a0 isEnabled:(BOOL)a1;

@end
