@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration

@property (nonatomic) int projectorMode;
@property (nonatomic) BOOL supplementalPointCloudData;
@property (nonatomic) BOOL pointCloudOutputDisabled;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
