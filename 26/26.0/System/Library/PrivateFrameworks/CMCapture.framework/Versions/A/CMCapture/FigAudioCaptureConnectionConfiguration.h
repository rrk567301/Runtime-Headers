@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) int audioCaptureMode;
@property (nonatomic) BOOL windNoiseRemovalEnabled;
@property (nonatomic) int builtInMicrophonePosition;
@property (nonatomic) double builtInMicrophoneRequiredSampleRate;
@property (nonatomic) unsigned int spatialAudioChannelLayoutTag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
