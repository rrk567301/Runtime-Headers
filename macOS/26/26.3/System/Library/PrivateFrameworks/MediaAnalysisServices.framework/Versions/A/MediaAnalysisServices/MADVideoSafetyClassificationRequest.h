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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
