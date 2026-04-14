@interface AVB17221AEMIIDCStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned short iidcFormat;
@property unsigned char iidcRate;

+ (id)keyPathsForValuesAffectingIidcFormat;
+ (id)keyPathsForValuesAffectingIidcRate;

- (id)init;
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isVideoFormat;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;
- (void)setIidcFormat:(unsigned short)a0;
- (unsigned short)iidcFormat;
- (void)setIidcRate:(unsigned char)a0;
- (unsigned char)iidcRate;

@end
