@interface FigCaptureMovieFileSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) char trueVideoCaptureEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
