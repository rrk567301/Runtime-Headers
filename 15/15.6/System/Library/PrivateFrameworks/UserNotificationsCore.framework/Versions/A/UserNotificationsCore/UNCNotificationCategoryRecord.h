@class NSArray, NSString;

@interface UNCNotificationCategoryRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) char hasCustomDismissAction;
@property (nonatomic) char hasFollowActivityAction;
@property (nonatomic) char hasCustomSilenceAction;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSArray *minimalActions;
@property (nonatomic) char shouldAllowInCarPlay;
@property (nonatomic) char privacyOptionShowTitle;
@property (nonatomic) char privacyOptionShowSubtitle;
@property (nonatomic) char preventAutomaticRemovalFromRecent;
@property (nonatomic) char revealAdditionalContentWhenPresented;
@property (nonatomic) char preventAutomaticLock;
@property (nonatomic) char preventDismissWhenClosed;
@property (nonatomic) char presentFullScreenAlertOverList;
@property (nonatomic) char shouldAllowActionsInCarPlay;
@property (nonatomic) char shouldAllowPersistentBannersInCarPlay;
@property (nonatomic) char playMediaWhenRaised;
@property (nonatomic) char preventClearFromList;
@property (nonatomic) char alwaysDisplayNotificationsIndicator;
@property (nonatomic) char suppressDelayForForwardedNotifications;
@property (nonatomic) char suppressDismissActionInCarPlay;
@property (nonatomic) char suppressPresentationInAmbient;
@property (copy, nonatomic) NSString *privateBody;
@property (copy, nonatomic) NSString *summaryFormat;
@property (copy, nonatomic) NSString *backgroundStyle;
@property (copy, nonatomic) NSString *listPriority;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
