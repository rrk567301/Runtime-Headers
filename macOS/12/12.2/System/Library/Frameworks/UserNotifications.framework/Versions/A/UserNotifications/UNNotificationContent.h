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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addSecurityScope:(id)a0;
- (void)removeSecurityScope;
- (id)contentByUpdatingWithSendMessageIntent:(id)a0 error:(out id *)a1;
- (id)contentByUpdatingWithStartCallIntent:(id)a0 error:(out id *)a1;
- (void)enterSecurityScope;
- (void)leaveSecurityScope;
- (id)contentByUpdatingWithReadAnnouncementIntent:(id)a0 error:(out id *)a1;
- (id)_descriptionForDebug:(BOOL)a0;
- (id)_safeStringForString:(id)a0 debug:(BOOL)a1;
- (id)_initWithContentType:(id)a0 communicationContext:(id)a1 accessoryImageName:(id)a2 attachments:(id)a3 badge:(id)a4 body:(id)a5 categoryIdentifier:(id)a6 date:(id)a7 icon:(id)a8 defaultActionTitle:(id)a9 defaultActionURL:(id)a10 expirationDate:(id)a11 header:(id)a12 footer:(id)a13 launchImageName:(id)a14 peopleIdentifiers:(id)a15 shouldHideDate:(BOOL)a16 shouldHideTime:(BOOL)a17 shouldIgnoreDoNotDisturb:(BOOL)a18 shouldIgnoreDowntime:(BOOL)a19 shouldSuppressScreenLightUp:(BOOL)a20 shouldAuthenticateDefaultAction:(BOOL)a21 shouldBackgroundDefaultAction:(BOOL)a22 shouldPreventNotificationDismissalAfterDefaultAction:(BOOL)a23 shouldShowSubordinateIcon:(BOOL)a24 shouldSuppressDefaultAction:(BOOL)a25 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a26 shouldUseRequestIdentifierForDismissalSync:(BOOL)a27 shouldPreemptPresentedNotification:(BOOL)a28 shouldDisplayActionsInline:(BOOL)a29 sound:(id)a30 subtitle:(id)a31 threadIdentifier:(id)a32 title:(id)a33 topicIdentifiers:(id)a34 realertCount:(unsigned long long)a35 summaryArgument:(id)a36 summaryArgumentCount:(unsigned long long)a37 targetContentIdentifier:(id)a38 interruptionLevel:(unsigned long long)a39 relevanceScore:(double)a40 userInfo:(id)a41;
- (id)contentByUpdatingWithProvider:(id)a0 error:(out id *)a1;
- (id)markedMutableCopyWithMessage:(id)a0;

@end
