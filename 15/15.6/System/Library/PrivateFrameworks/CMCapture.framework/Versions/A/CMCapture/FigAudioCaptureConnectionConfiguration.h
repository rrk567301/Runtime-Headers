@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) int audioCaptureMode;
@property (nonatomic) char windNoiseRemovalEnabled;
@property (nonatomic) int builtInMicrophonePosition;
@property (nonatomic) double builtInMicrophoneRequiredSampleRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
