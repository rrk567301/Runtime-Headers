@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateVideoFrames;
@property (nonatomic) BOOL optimizedForPreview;
@property (nonatomic) BOOL sceneStabilityMetadataEnabled;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;

@end
