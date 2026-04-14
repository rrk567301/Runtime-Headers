@interface FigCapturePointCloudDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLatePointCloudData;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;

@end
