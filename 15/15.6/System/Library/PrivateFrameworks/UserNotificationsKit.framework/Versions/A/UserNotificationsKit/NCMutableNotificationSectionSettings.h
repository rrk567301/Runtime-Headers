@class NSString, NSDictionary, NSSet, UIImage;
@protocol NCNotificationMuteAssertion;

@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *subSectionIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSSet *subSectionSettings;
@property (nonatomic, getter=isUserConfigurable) char userConfigurable;
@property (retain, nonatomic) UIImage *settingsIcon;
@property (nonatomic) char showsCustomSettingsLink;
@property (nonatomic) char isDeliveredQuietly;
@property (nonatomic) char hasProvisionalAuthorization;
@property (nonatomic) char isAppClip;
@property (nonatomic) id<NCNotificationMuteAssertion> muteAssertion;

- (void)setDisplayName:(id)a0;
- (void)setSettings:(id)a0;
- (void)setSectionIdentifier:(id)a0;
- (void)setIsAppClip:(char)a0;
- (void)setMuteAssertion:(id)a0;
- (void)setShowsCustomSettingsLink:(char)a0;
- (void)setHasProvisionalAuthorization:(char)a0;
- (void)setIsDeliveredQuietly:(char)a0;
- (void)setSettingsIcon:(id)a0;
- (void)setSubSectionIdentifier:(id)a0;
- (void)setSubSectionSettings:(id)a0;
- (void)setUserConfigurable:(char)a0;

@end
