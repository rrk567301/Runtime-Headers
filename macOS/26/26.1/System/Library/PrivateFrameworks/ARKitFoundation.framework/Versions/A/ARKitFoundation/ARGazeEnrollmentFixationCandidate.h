@class NSUUID;

@interface ARGazeEnrollmentFixationCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *fixationCandidateID;
@property (nonatomic) void /* unknown type, empty encoding */ positionMeters;
@property (retain, nonatomic) NSUUID *positionID;
@property (retain, nonatomic) NSUUID *backgroundBrightnessID;
@property (nonatomic) float relativeBackgroundBrightnessLevel;
@property (nonatomic) double estimatedIdealFixationTime;
@property (nonatomic) double firstDisplayedTime;
@property (nonatomic) double lastDisplayedTime;
@property (nonatomic) void /* unknown type, empty encoding */ fixationPointColor;
@property (nonatomic) float fixationPointCenterSizeMeters;
@property (nonatomic) float fixationPointTotalSizeMeters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFixationCandidateID:(id)a0 position:(SEL)a1 positionID:(id)a2 backgroundBrightnessID:(id)a3 relativeBackgroundBrightnessLevel:(id)a4 fixationPointColor:(float)a5 fixationPointCenterSizeMeters:(float)a6 fixationPointTotalSizeMeters:(float)a7;

@end
