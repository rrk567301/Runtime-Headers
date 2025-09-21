@class NSNumber, MADVideoSafetyFrameSampling;

@interface MADVideoSafetyClassificationRequest : MADVideoRequest

@property (nonatomic) char requiresScoresAndLabels;
@property (copy, nonatomic) MADVideoSafetyFrameSampling *sampling;
@property (nonatomic) char appliesPreferredTrackTransform;
@property (nonatomic) char requiresBlastdoor;
@property (retain, nonatomic) NSNumber *sensitiveFrameCountThreshold;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
