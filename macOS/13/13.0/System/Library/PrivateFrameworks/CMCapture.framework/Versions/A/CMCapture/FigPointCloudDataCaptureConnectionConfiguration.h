@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration

@property (nonatomic) int projectorMode;
@property (nonatomic) BOOL supplementalPointCloudData;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;

@end
