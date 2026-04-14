@class NSNumber, MOBoolSettingMetadata;

@interface MOGameCenterSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyAddingFriendsMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyMultiplayerGamingMetadata;

@property (retain, nonatomic) NSNumber *denyAddingFriends;
@property (retain, nonatomic) NSNumber *denyMultiplayerGaming;

+ (id)groupName;

@end
