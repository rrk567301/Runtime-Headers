@interface SiriUIAudioDeviceManager : NSObject

@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)isAudioInputAvailable;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
