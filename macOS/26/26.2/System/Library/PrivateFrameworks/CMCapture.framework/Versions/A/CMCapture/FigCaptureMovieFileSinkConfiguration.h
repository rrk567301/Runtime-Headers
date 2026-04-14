@class NSString;

@interface FigCaptureMovieFileSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL trueVideoCaptureEnabled;
@property (nonatomic) BOOL multiCamClientCompositingEnabled;
@property (copy, nonatomic) NSString *multiCamClientCompositingPrimaryConnectionID;

- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;

@end
