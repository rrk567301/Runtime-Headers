@interface SOAudioInputDevice : SOAudioDevice

- (id)description;
- (void)setLevel:(float)a0;
- (BOOL)isNoiseReductionEnabled;
- (void)setNoiseReductionEnabled:(BOOL)a0;
- (BOOL)isInternalMicrophone;
- (id)initWithAudioDevice:(unsigned int)a0;
- (BOOL)hasNoiseReduction;
- (id)_debuggingAttributes;

@end
