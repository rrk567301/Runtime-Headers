@interface FigCapturePointCloudDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLatePointCloudData;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
