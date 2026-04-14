@interface SiriUIAudioDeviceManager : NSObject

@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)isAudioInputAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
