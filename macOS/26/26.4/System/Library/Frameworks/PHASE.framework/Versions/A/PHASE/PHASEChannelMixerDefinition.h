@class AVAudioChannelLayout;

@interface PHASEChannelMixerDefinition : PHASEMixerDefinition

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithChannelLayout:(id)a0;
- (id)initWithChannelLayout:(id)a0 identifier:(id)a1;

@end
