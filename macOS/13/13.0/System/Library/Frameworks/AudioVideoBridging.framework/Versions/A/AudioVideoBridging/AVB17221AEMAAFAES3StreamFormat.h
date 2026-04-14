@interface AVB17221AEMAAFAES3StreamFormat : AVB17221AEMAAFStreamFormat

@property unsigned char framesPerFrame;
@property unsigned short streamsPerFrame;
@property unsigned char dataTypeReference;
@property unsigned short dataType;

+ (id)keyPathsForValuesAffectingFramesPerFrame;
+ (id)keyPathsForValuesAffectingStreamsPerFrame;
+ (id)keyPathsForValuesAffectingDataTypeReference;
+ (id)keyPathsForValuesAffectingDataType;

- (id)init;
- (void)setDataType:(unsigned short)a0;
- (unsigned short)dataType;
- (unsigned short)numberOfAudioChannels;
- (BOOL)isSupportedAudioFormat;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;
- (void)setFramesPerFrame:(unsigned char)a0;
- (unsigned char)framesPerFrame;
- (void)setStreamsPerFrame:(unsigned short)a0;
- (unsigned short)streamsPerFrame;
- (void)setDataTypeReference:(unsigned char)a0;
- (unsigned char)dataTypeReference;

@end
