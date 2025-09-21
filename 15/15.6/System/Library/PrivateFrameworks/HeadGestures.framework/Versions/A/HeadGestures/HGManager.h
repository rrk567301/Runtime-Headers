@class HGConfiguration, HGManagerInternal;

@interface HGManager : NSObject

@property (readonly) HGManagerInternal *internal;
@property (nonatomic) char muteAudioFeedback;
@property (nonatomic) char requestPartGestures;
@property (retain, nonatomic) HGConfiguration *configuration;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 config:(id)a1;

@end
