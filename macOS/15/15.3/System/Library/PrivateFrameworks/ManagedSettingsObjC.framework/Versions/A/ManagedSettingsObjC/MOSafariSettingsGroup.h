@class NSString, MOBoolSettingMetadata, MOStringSettingMetadata, NSNumber;

@interface MOSafariSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOStringSettingMetadata *cookiePolicyMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAutoFillMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySafariMetadata;

@property (retain, nonatomic) NSString *cookiePolicy;
@property (retain, nonatomic) NSNumber *denyAutoFill;
@property (retain, nonatomic) NSNumber *denySafari;

+ (id)groupName;

@end
