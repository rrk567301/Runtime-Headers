@class AVAudioChannelLayout;

@interface PHASEChannelMixer : PHASEMixer

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 inputChannelLayout:(id)a1;

@end
