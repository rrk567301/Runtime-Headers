@interface SKSoundContext : NSObject {
    struct ALCdevice_struct { } *_device;
    struct ALCcontext_struct { } *_context;
    char _suspended;
}

@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint { double x0; double x1; } listenerPosition;
@property (nonatomic) char suspended;

+ (id)context;
+ (id)currentContext;

- (void)dealloc;
- (id)init;
- (void)makeCurrentContext;

@end
