@class NSString, MOBoolSettingMetadata, MOStringSettingMetadata, NSNumber;

@interface MOSafariSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOStringSettingMetadata *cookiePolicyMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyAutoFillMetadata;

@property (retain, nonatomic) NSString *cookiePolicy;
@property (retain, nonatomic) NSNumber *denyAutoFill;

+ (id)groupName;

@end
