@class NSString, MOBoolSettingMetadata, MOStringSettingMetadata, NSNumber;

@interface MOUserSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denySharingMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyUnrestrictedSharingMetadata;
@property (class, readonly, retain, nonatomic) MOStringSettingMetadata *sharingPolicyMetadata;

@property (retain, nonatomic) NSNumber *denySharing;
@property (retain, nonatomic) NSNumber *denyUnrestrictedSharing;
@property (retain, nonatomic) NSString *sharingPolicy;

+ (id)groupName;

@end
