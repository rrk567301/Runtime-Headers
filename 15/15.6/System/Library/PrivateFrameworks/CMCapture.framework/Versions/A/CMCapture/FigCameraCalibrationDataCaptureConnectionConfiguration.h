@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) char mirroringEnabled;
@property (nonatomic) int orientation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
