@interface ARGazeValidationPointResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct ARGazeValidationPointStatusData { unsigned int pointIndex; float validity; } validationData;
@property (readonly, nonatomic) struct ARGazeValidationPointDetailsData { struct ARGazeValidationPointStatusDataDetails { float meanGazeOrigin[3]; float meanGazeDirection[3]; double fixationStartTime; double fixationEndTime; float accuracy; } leftEye; struct ARGazeValidationPointStatusDataDetails { float meanGazeOrigin[3]; float meanGazeDirection[3]; double fixationStartTime; double fixationEndTime; float accuracy; } rightEye; struct ARGazeValidationPointStatusDataDetails { float meanGazeOrigin[3]; float meanGazeDirection[3]; double fixationStartTime; double fixationEndTime; float accuracy; } binocular; } validationDetails;
@property (readonly, nonatomic) char fixationValidity;
@property (readonly, nonatomic) struct ARGazeValidationStimulusTimes { double stimulusStartLeft; double stimulusEndLeft; double stimulusStartRight; double stimulusEndRight; double stimulusStartBinoc; double stimulusEndBinoc; } stimulusTimes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValidationData:(struct ARGazeValidationPointStatusData { unsigned int x0; float x1; })a0 details:(struct ARGazeValidationPointDetailsData { struct ARGazeValidationPointStatusDataDetails { float x0[3]; float x1[3]; double x2; double x3; float x4; } x0; struct ARGazeValidationPointStatusDataDetails { float x0[3]; float x1[3]; double x2; double x3; float x4; } x1; struct ARGazeValidationPointStatusDataDetails { float x0[3]; float x1[3]; double x2; double x3; float x4; } x2; })a1 fixationValidity:(char)a2 stimulusTimes:(struct ARGazeValidationStimulusTimes { double x0; double x1; double x2; double x3; double x4; double x5; })a3;

@end
