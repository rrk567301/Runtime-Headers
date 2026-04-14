@class NSString, NSDictionary, ARClipOnPoseResult;

@interface ARClipOnInfo : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *rxUUID;
@property (readonly, nonatomic) NSDictionary *clipOnInfoData;
@property (readonly, nonatomic) ARClipOnPoseResult *poseResult;

+ (id)resourceKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClipOnStatus:(long long)a0 rxUUID:(id)a1 clipOnInfo:(id)a2 poseResult:(id)a3;

@end
