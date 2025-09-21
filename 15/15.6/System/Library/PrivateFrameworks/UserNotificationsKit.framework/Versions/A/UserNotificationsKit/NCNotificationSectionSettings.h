@class NSString, NSDictionary, NSSet, UIImage;
@protocol NCNotificationMuteAssertion;

@interface NCNotificationSectionSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, copy, nonatomic) NSString *subSectionIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *settings;
@property (readonly, copy, nonatomic) NSSet *subSectionSettings;
@property (readonly, nonatomic, getter=isUserConfigurable) char userConfigurable;
@property (readonly, nonatomic) UIImage *settingsIcon;
@property (readonly, nonatomic) char showsCustomSettingsLink;
@property (readonly, nonatomic) char isDeliveredQuietly;
@property (readonly, nonatomic) char hasProvisionalAuthorization;
@property (readonly, nonatomic) char isAppClip;
@property (readonly, nonatomic) id<NCNotificationMuteAssertion> muteAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithNotificationSectionSettings:(id)a0;

@end
