@interface AVB17221AEMAAFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char nominalSampleRate;
@property unsigned char format;
@property BOOL upTo;

+ (id)keyPathsForValuesAffectingUpTo;
+ (id)keyPathsForValuesAffectingNominalSampleRate;
+ (id)keyPathsForValuesAffectingFormat;

- (id)init;
- (unsigned char)format;
- (void)setFormat:(unsigned char)a0;
- (void)setSamplingRate:(id)a0;
- (id)samplingRate;
- (BOOL)isSupportedAudioFormat;
- (void)setUpTo:(BOOL)a0;
- (BOOL)isAudioFormat;
- (BOOL)upTo;
- (unsigned char)nominalSampleRate;
- (void)setNominalSampleRate:(unsigned char)a0;

@end
