@class NSString, NSArray, NSURL, _UNNotificationContact;

@interface _UNNotificationCommunicationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *associatedObjectUri;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) _UNNotificationContact *sender;
@property (readonly, copy) NSArray *recipients;
@property (readonly, copy) NSURL *contentURL;
@property (readonly, copy) NSString *imageName;
@property (readonly, getter=isSystemImage) char systemImage;
@property (readonly) char mentionsCurrentUser;
@property (readonly) char notifyRecipientAnyway;
@property (readonly, getter=isReplyToCurrentUser) char replyToCurrentUser;
@property (readonly) unsigned long long recipientCount;
@property (readonly, getter=isGroup) char group;
@property (readonly, getter=isDirect) char direct;
@property (readonly) long long capabilities;
@property (readonly, getter=isBusinessCorrespondence) char businessCorrespondence;
@property (readonly, copy) NSArray *allContacts;
@property (readonly, copy) NSString *preferredSenderSummary;
@property (readonly, copy) NSString *preferredRecipientsSummary;
@property (readonly, copy) NSString *preferredDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)_effectiveAllContactsCount;
- (unsigned long long)_effectiveRecipientCount;
- (id)_initWithIdentifier:(id)a0 associatedObjectUri:(id)a1 bundleIdentifier:(id)a2 displayName:(id)a3 sender:(id)a4 recipients:(id)a5 contentURL:(id)a6 imageName:(id)a7 systemImage:(char)a8 mentionsCurrentUser:(char)a9 notifyRecipientAnyway:(char)a10 replyToCurrentUser:(char)a11 recipientCount:(unsigned long long)a12 capabilities:(long long)a13 businessCorrespondence:(char)a14;
- (id)_summaryFromContacts:(id)a0 effectiveCount:(unsigned long long)a1 includeMe:(char)a2;
- (char)isAvatarImagePossible;
- (char)isAvatarImagePossibleForBundleIdentifier:(id)a0;

@end
