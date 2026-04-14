@class NSDate, NSString, NSArray, NSURL, _UNNotificationCommunicationContext, NSSet, UNNotificationSound, NSDictionary, UNNotificationIcon, NSNumber;

@interface UNNotificationContent : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_subtitle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *markedMutableCopyMessage;
@property (readonly, copy) NSString *contentType;
@property (readonly, copy) _UNNotificationCommunicationContext *communicationContext;
@property (readonly, copy) NSString *header;
@property (readonly, copy) NSString *footer;
@property (readonly) BOOL shouldIgnoreDoNotDisturb;
@property (readonly) BOOL shouldIgnoreDowntime;
@property (readonly) BOOL shouldSuppressScreenLightUp;
@property (readonly) BOOL shouldHideDate;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly) BOOL shouldAuthenticateDefaultAction;
@property (readonly) BOOL shouldBackgroundDefaultAction;
@property (readonly) BOOL shouldPreventNotificationDismissalAfterDefaultAction;
@property (readonly) BOOL shouldSuppressDefaultAction;
@property (readonly, copy) NSURL *defaultActionURL;
@property (readonly, copy) NSString *defaultActionBundleIdentifier;
@property (readonly) BOOL shouldDisplayActionsInline;
@property (readonly, copy) UNNotificationIcon *icon;
@property (readonly) BOOL shouldShowSubordinateIcon;
@property (readonly, copy, nonatomic) NSSet *topicIdentifiers;
@property (readonly) unsigned long long realertCount;
@property (readonly) BOOL shouldUseRequestIdentifierForDismissalSync;
@property (readonly) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (readonly) NSString *accessoryImageName;
@property (readonly, copy) NSArray *peopleIdentifiers;
@property (readonly) BOOL shouldPreemptPresentedNotification;
@property (readonly) BOOL shouldHideTime;
@property (readonly) BOOL hasDefaultAction;
@property (readonly, copy) NSString *defaultActionTitle;
@property (readonly, copy) NSArray *attachments;
@property (readonly, copy) NSNumber *badge;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *categoryIdentifier;
@property (readonly, copy) NSString *launchImageName;
@property (readonly, copy) UNNotificationSound *sound;
@property (readonly, copy) NSString *subtitle;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSString *summaryArgument;
@property (readonly) unsigned long long summaryArgumentCount;
@property (readonly, copy) NSString *targetContentIdentifier;
@property (readonly) unsigned long long interruptionLevel;
@property (readonly) double relevanceScore;
@property (readonly, copy) NSString *filterCriteria;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionForDebug:(BOOL)a0;
- (id)_initWithContentType:(id)a0 communicationContext:(id)a1 accessoryImageName:(id)a2 attachments:(id)a3 badge:(id)a4 body:(id)a5 categoryIdentifier:(id)a6 date:(id)a7 icon:(id)a8 defaultActionTitle:(id)a9 defaultActionURL:(id)a10 defaultActionBundleIdentifier:(id)a11 expirationDate:(id)a12 header:(id)a13 footer:(id)a14 launchImageName:(id)a15 peopleIdentifiers:(id)a16 shouldHideDate:(BOOL)a17 shouldHideTime:(BOOL)a18 shouldIgnoreDoNotDisturb:(BOOL)a19 shouldIgnoreDowntime:(BOOL)a20 shouldSuppressScreenLightUp:(BOOL)a21 shouldAuthenticateDefaultAction:(BOOL)a22 shouldBackgroundDefaultAction:(BOOL)a23 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)a24 shouldShowSubordinateIcon:(BOOL)a25 shouldSuppressDefaultAction:(BOOL)a26 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a27 shouldUseRequestIdentifierForDismissalSync:(BOOL)a28 shouldPreemptPresentedNotification:(BOOL)a29 shouldDisplayActionsInline:(BOOL)a30 sound:(id)a31 subtitle:(id)a32 threadIdentifier:(id)a33 title:(id)a34 topicIdentifiers:(id)a35 realertCount:(unsigned long long)a36 summaryArgument:(id)a37 summaryArgumentCount:(unsigned long long)a38 targetContentIdentifier:(id)a39 interruptionLevel:(unsigned long long)a40 relevanceScore:(double)a41 filterCriteria:(id)a42 userInfo:(id)a43;
- (id)_safeStringForString:(id)a0 debug:(BOOL)a1;
- (void)addSecurityScope:(id)a0;
- (id)contentByUpdatingWithProvider:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithReadAnnouncementIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithSendMessageIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithStartCallIntent:(id)a0 error:(out id *)a1;
- (void)enterSecurityScope;
- (void)leaveSecurityScope;
- (id)markedMutableCopyWithMessage:(id)a0;
- (void)removeSecurityScope;

@end
