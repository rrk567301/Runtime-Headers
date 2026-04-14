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
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (BOOL)isSupportedAudioFormat;
- (BOOL)isAudioFormat;
- (void)setUpTo:(BOOL)a0;
- (BOOL)upTo;
- (void)setNominalSampleRate:(unsigned char)a0;
- (unsigned char)nominalSampleRate;

@end
