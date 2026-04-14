@interface SiriUIAudioDeviceManager : NSObject

@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)isAudioInputAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
