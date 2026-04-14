@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (nonatomic) BOOL cameraSensorOrientationCompensationEnabled;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
