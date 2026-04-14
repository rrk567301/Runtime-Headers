@class NSString, PCPLocation, NSUUID;

@interface PCEventWorkout : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *workoutType;
@property (retain, nonatomic) PCPLocation *workoutLocationStart;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (retain, nonatomic) NSUUID *hkObjectIdentifier;
@property (nonatomic) int workoutSessionLocationType;
@property (nonatomic) int workoutSwimmingLocationType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
