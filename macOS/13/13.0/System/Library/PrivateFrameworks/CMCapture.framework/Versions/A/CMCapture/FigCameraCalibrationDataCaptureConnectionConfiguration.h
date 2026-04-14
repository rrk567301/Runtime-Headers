@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) int orientation;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;

@end
