@class NSString;

@interface FigCaptureMovieFileSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL trueVideoCaptureEnabled;
@property (nonatomic) BOOL multiCamClientCompositingEnabled;
@property (copy, nonatomic) NSString *multiCamClientCompositingPrimaryConnectionID;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)description;
- (void)dealloc;
- (int)sinkType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
