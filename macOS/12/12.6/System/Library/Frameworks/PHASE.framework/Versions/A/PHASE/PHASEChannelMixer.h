@class AVAudioChannelLayout;

@interface PHASEChannelMixer : PHASEMixer

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

- (id)init;
- (void).cxx_destruct;

@end
