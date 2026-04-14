@class NSString;

@interface FigCaptureMovieFileSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL trueVideoCaptureEnabled;
@property (nonatomic) BOOL multiCamClientCompositingEnabled;
@property (copy, nonatomic) NSString *multiCamClientCompositingPrimaryConnectionID;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
