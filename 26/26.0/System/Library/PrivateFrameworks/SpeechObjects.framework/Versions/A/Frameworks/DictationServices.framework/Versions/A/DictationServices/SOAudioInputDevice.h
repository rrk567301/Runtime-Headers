@interface SOAudioInputDevice : SOAudioDevice

- (void)setLevel:(float)a0;
- (id)description;
- (BOOL)isNoiseReductionEnabled;
- (void)setNoiseReductionEnabled:(BOOL)a0;
- (id)initWithAudioDevice:(unsigned int)a0;
- (BOOL)isInternalMicrophone;
- (id)_debuggingAttributes;
- (BOOL)hasNoiseReduction;

@end
