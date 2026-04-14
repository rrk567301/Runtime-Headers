@interface IMAVButton : IMAVControl

+ (id)playPauseButton;
+ (Class)_auxiliaryClass;
+ (id)backwardButton;
+ (id)forwardButton;
+ (id)muteButton;

- (void)setState:(long long)a0;
- (long long)state;

@end
