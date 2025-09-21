@class AVTAvatar, NSString, AVTAvatarDescriptor, AVTStickerConfiguration, NSData, AVTAvatarPhysicalizedPose, CNMemojiBackgroundParameters;
@protocol AVTAvatarRecord;

@interface CNMemojiMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (readonly, copy, nonatomic) NSString *poseName;
@property (readonly, nonatomic) AVTAvatarPhysicalizedPose *pose;
@property (readonly, copy, nonatomic) NSString *backgroundColorDescription;
@property (readonly, nonatomic) CNMemojiBackgroundParameters *backgroundParameters;
@property (readonly, nonatomic) AVTStickerConfiguration *poseConfiguration;
@property (readonly, nonatomic) NSData *poseConfigurationData;
@property (readonly, nonatomic) char poseHasBody;
@property (readonly, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) AVTAvatarDescriptor *avatarDescriptor;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } cropTransform;
@property (readonly, nonatomic) NSString *avatarRecordIdentifier;
@property (readonly, nonatomic) NSData *avatarRecordData;
@property (readonly, nonatomic) char avatarRecordIsEditable;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAvatarRecord:(id)a0 poseConfiguration:(id)a1 backgroundColorDescription:(id)a2;
- (id)initWithAvatarRecord:(id)a0 poseConfiguration:(id)a1 backgroundColorDescription:(id)a2 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (id)initWithAvatarRecord:(id)a0 poseName:(id)a1 pose:(id)a2 backgroundColorDescription:(id)a3;
- (id)initWithAvatarRecord:(id)a0 poseName:(id)a1 pose:(id)a2 backgroundColorDescription:(id)a3 cropTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4;
- (id)initWithBackgroundColorDescription:(id)a0;

@end
