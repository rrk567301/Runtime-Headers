@class NSData, NSDictionary, ARClipOnPoseResult;

@interface ARClipOnEnrollmentResult : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSData *serializedImageFeatures;
@property (readonly, nonatomic) NSDictionary *clipOnInfo;
@property (readonly, nonatomic) ARClipOnPoseResult *poseResult;
@property (readonly, nonatomic) BOOL didUpdateGazeSession;

+ (id)resourceKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClipOnStatus:(long long)a0 clipOnInfo:(id)a1 serializedImageFeatures:(id)a2 poseResult:(id)a3 didUpdateGazeSession:(BOOL)a4;

@end
