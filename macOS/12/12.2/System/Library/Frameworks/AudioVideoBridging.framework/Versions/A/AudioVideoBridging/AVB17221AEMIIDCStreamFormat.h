@interface AVB17221AEMIIDCStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned short iidcFormat;
@property unsigned char iidcRate;

+ (id)keyPathsForValuesAffectingIidcFormat;
+ (id)keyPathsForValuesAffectingIidcRate;

- (id)init;
- (void)setSamplingRate:(id)a0;
- (id)samplingRate;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isVideoFormat;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;
- (unsigned short)iidcFormat;
- (unsigned char)iidcRate;
- (void)setIidcRate:(unsigned char)a0;
- (void)setIidcFormat:(unsigned short)a0;

@end
