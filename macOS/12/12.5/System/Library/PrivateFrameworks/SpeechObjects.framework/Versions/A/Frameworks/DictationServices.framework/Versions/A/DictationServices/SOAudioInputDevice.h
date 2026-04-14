@interface SOAudioInputDevice : SOAudioDevice

- (id)description;
- (void)setLevel:(float)a0;
- (void)setNoiseReductionEnabled:(BOOL)a0;
- (BOOL)isNoiseReductionEnabled;
- (BOOL)isInternalMicrophone;
- (id)_debuggingAttributes;
- (id)initWithAudioDevice:(unsigned int)a0;
- (BOOL)hasNoiseReduction;

@end
