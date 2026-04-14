@interface ARGazeCalibrationPointResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct ARGazeCalibrationPointStatusData { unsigned int pointIndex; float fixationValidityLeft; float fixationValidityRight; float offsetAngleLeft; float offsetAngleRight; } calibrationData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCalibrationData:(struct ARGazeCalibrationPointStatusData { unsigned int x0; float x1; float x2; float x3; float x4; })a0;

@end
