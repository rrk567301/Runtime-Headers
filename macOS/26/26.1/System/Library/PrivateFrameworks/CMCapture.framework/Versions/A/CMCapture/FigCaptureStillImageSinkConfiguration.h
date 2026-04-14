@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (nonatomic) BOOL cameraSensorOrientationCompensationEnabled;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)description;
- (int)sinkType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
