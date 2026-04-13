@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateCameraCalibrationData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;

@end
