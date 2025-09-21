@interface FigCapturePointCloudDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLatePointCloudData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
