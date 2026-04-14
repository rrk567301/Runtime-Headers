@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateDepthData;
@property (nonatomic) BOOL filteringEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;

@end
