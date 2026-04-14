@class NSNumber, AVAudioFormat;

@interface PHASEPullStreamNodeDefinition : PHASEGeneratorNodeDefinition

@property (retain, nonatomic) NSNumber *targetLKFS;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (nonatomic) BOOL normalize;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMixerDefinition:(id)a0 format:(id)a1;
- (id)initWithMixerDefinition:(id)a0 format:(id)a1 identifier:(id)a2;

@end
