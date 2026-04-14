@class NSString;

@interface FigCaptureMovieFileSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL trueVideoCaptureEnabled;
@property (nonatomic) BOOL multiCamClientCompositingEnabled;
@property (copy, nonatomic) NSString *multiCamClientCompositingPrimaryConnectionID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
