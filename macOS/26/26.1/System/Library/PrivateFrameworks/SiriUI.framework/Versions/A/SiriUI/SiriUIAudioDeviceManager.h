@interface SiriUIAudioDeviceManager : NSObject

@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)isAudioInputAvailable;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
