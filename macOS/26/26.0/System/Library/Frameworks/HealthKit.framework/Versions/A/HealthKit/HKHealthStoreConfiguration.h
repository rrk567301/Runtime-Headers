@class NSString, HKProfileIdentifier;

@interface HKHealthStoreConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly, copy, nonatomic) NSString *debugIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) unsigned long long applicationSDKVersionToken;
@property (readonly, copy, nonatomic) NSString *daemonLaunchDarwinNotificationName;
@property (readonly, copy, nonatomic) NSString *writeAuthorizationUsageDescriptionOverride;
@property (readonly, copy, nonatomic) NSString *readAuthorizationUsageDescriptionOverride;
@property (readonly, copy, nonatomic) NSString *clinicalReadAuthorizationUsageDescriptionOverride;
@property (readonly, copy, nonatomic) NSString *researchStudyUsageDescriptionOverride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSourceBundleIdentifier:(id)a0 sourceVersion:(id)a1 debugIdentifier:(id)a2 profileIdentifier:(id)a3 applicationSDKVersionToken:(unsigned long long)a4 daemonLaunchDarwinNotificationName:(id)a5 writeAuthorizationUsageDescriptionOverride:(id)a6 readAuthorizationUsageDescriptionOverride:(id)a7 clinicalReadAuthorizationUsageDescriptionOverride:(id)a8 researchStudyUsageDescriptionOverride:(id)a9;
- (id)copy;
- (id)initWithSourceBundleIdentifier:(id)a0 sourceVersion:(id)a1 debugIdentifier:(id)a2 profileIdentifier:(id)a3 applicationSDKVersionToken:(unsigned long long)a4;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
