@interface AVB17221AEMIIDCStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned short iidcFormat;
@property unsigned char iidcRate;

+ (id)keyPathsForValuesAffectingIidcFormat;
+ (id)keyPathsForValuesAffectingIidcRate;

- (id)init;
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)iidcFormat;
- (unsigned char)iidcRate;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isVideoFormat;
- (unsigned short)maximumIntervalFrames;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (void)setIidcFormat:(unsigned short)a0;
- (void)setIidcRate:(unsigned char)a0;

@end
