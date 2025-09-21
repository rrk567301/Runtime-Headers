@interface SOAudioInputDevice : SOAudioDevice

- (id)description;
- (void)setLevel:(float)a0;
- (char)isNoiseReductionEnabled;
- (void)setNoiseReductionEnabled:(char)a0;
- (id)initWithAudioDevice:(unsigned int)a0;
- (char)isInternalMicrophone;
- (id)_debuggingAttributes;
- (char)hasNoiseReduction;

@end
