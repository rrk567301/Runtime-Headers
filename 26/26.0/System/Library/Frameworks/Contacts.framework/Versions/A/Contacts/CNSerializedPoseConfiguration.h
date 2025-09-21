@class NSString, AVTAvatarPhysicalizedPose;

@interface CNSerializedPoseConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *poseName;
@property (readonly, copy, nonatomic) AVTAvatarPhysicalizedPose *pose;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPoseConfiguration:(id)a0;
- (id)initWithPoseName:(id)a0 pose:(id)a1;

@end
