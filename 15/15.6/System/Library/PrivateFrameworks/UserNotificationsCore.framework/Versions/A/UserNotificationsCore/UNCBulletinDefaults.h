@class NSArray, NSString;

@interface UNCBulletinDefaults : BSAbstractDefaultDomain <UNCBulletinDefaultsInterface>

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalAnnounceSetting;
@property (nonatomic) long long globalAnnounceHeadphonesSetting;
@property (nonatomic) long long globalAnnounceCarPlaySetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (nonatomic) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic) long long globalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic) long long globalNotificationListDisplayStyleSetting;
@property (nonatomic) long long globalSpokenNotificationSetting_deprecated;
@property (nonatomic, getter=isAnnounceSupportedForHeadphones) char announceSupportedForHeadphones;
@property (nonatomic, getter=isAnnounceSupportedForCarPlay) char announceSupportedForCarPlay;
@property (nonatomic, getter=hasPairedVehiclesForCarPlay) char pairedVehiclesForCarPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
