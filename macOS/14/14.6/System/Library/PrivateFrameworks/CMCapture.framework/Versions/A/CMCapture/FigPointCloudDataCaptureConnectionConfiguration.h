@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration

@property (nonatomic) int projectorMode;
@property (nonatomic) BOOL supplementalPointCloudData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
