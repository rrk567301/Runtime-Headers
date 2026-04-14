@interface IMAVButton : IMAVControl

+ (id)playPauseButton;
+ (Class)_auxiliaryClass;
+ (id)forwardButton;
+ (id)backwardButton;
+ (id)muteButton;

- (long long)state;
- (void)setState:(long long)a0;

@end
