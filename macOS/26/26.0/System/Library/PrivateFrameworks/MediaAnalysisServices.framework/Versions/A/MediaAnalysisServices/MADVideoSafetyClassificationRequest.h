@class NSNumber, MADVideoSafetyFrameSampling;

@interface MADVideoSafetyClassificationRequest : MADVideoRequest

@property (nonatomic) BOOL requiresScoresAndLabels;
@property (copy, nonatomic) MADVideoSafetyFrameSampling *sampling;
@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (nonatomic) BOOL requiresBlastdoor;
@property (retain, nonatomic) NSNumber *sensitiveFrameCountThreshold;
@property (nonatomic) BOOL enableNudityDetection;
@property (nonatomic) BOOL enableGoreViolenceDetection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
