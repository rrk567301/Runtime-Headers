@class NSUUID;

@interface ARGazeEnrollmentPointResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct ARGazeEnrollmentPointStatusData { unsigned int pointIndex; float fixationValidityLeft; float fixationValidityRight; } enrollmentData;
@property (readonly, nonatomic) struct ARGazeEnrollmentPointDetailsData { double fixationStartTimeLeft; double fixationEndTimeLeft; double fixationStartTimeRight; double fixationEndTimeRight; } enrollmentDetails;
@property (readonly, nonatomic) struct ARGazeEnrollmentStimulusTimes { double stimulusStartLeft; double stimulusEndLeft; double stimulusStartRight; double stimulusEndRight; } stimulusTimes;
@property (retain, nonatomic) NSUUID *fixationCandidateID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnrollmentData:(struct ARGazeEnrollmentPointStatusData { unsigned int x0; float x1; float x2; })a0 details:(struct ARGazeEnrollmentPointDetailsData { double x0; double x1; double x2; double x3; })a1 stimulusTimes:(struct ARGazeEnrollmentStimulusTimes { double x0; double x1; double x2; double x3; })a2 fixationCandidateID:(id)a3;

@end
