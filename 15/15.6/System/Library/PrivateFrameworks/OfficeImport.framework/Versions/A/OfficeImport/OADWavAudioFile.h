@interface OADWavAudioFile : OADEmbeddedMediaFile

@property (nonatomic) float duration;
@property (nonatomic) char hasDuration;

- (char)isAudioOnly;
- (void)setIsAudioOnly:(char)a0;

@end
