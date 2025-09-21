@interface AVB17221AEMAAFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char headerVersion;
@property unsigned char nominalSampleRate;
@property unsigned char format;
@property BOOL upTo;

+ (id)keyPathsForValuesAffectingFormat;
+ (id)keyPathsForValuesAffectingHeaderVersion;
+ (id)keyPathsForValuesAffectingNominalSampleRate;
+ (id)keyPathsForValuesAffectingUpTo;

- (id)samplingRate;
- (id)init;
- (void)setFormat:(unsigned char)a0;
- (void)setSamplingRate:(id)a0;
- (unsigned char)format;
- (BOOL)isAudioFormat;
- (BOOL)isSupportedFormat;
- (unsigned char)nominalSampleRate;
- (void)setNominalSampleRate:(unsigned char)a0;
- (void)setUpTo:(BOOL)a0;
- (BOOL)upTo;

@end
