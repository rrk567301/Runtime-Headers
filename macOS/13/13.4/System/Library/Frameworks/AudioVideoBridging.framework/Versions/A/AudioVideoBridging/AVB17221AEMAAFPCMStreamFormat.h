@interface AVB17221AEMAAFPCMStreamFormat : AVB17221AEMAAFStreamFormat

@property unsigned char bitDepth;
@property unsigned short channelsPerFrame;
@property unsigned short samplesPerFrame;

+ (id)keyPathsForValuesAffectingBitDepth;
+ (id)keyPathsForValuesAffectingChannelsPerFrame;
+ (id)keyPathsForValuesAffectingSamplesPerFrame;

- (unsigned char)bitDepth;
- (unsigned short)numberOfAudioChannels;
- (unsigned short)channelsPerFrame;
- (void)setChannelsPerFrame:(unsigned short)a0;
- (void)setBitDepth:(unsigned char)a0;
- (unsigned short)samplesPerFrame;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isSupportedAudioFormat;
- (unsigned short)maximumIntervalFrames;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (void)setSamplesPerFrame:(unsigned short)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;

@end
