@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration

@property (nonatomic) int projectorMode;
@property (nonatomic) char supplementalPointCloudData;
@property (nonatomic) char pointCloudOutputDisabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
