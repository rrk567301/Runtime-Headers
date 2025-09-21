@class NSString, NSArray, NSURL, _UNNotificationContact;

@interface _UNMutableNotificationCommunicationContext : _UNNotificationCommunicationContext

@property (copy) NSString *identifier;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSString *associatedObjectUri;
@property (copy) NSString *displayName;
@property (copy) NSArray *recipients;
@property (copy) _UNNotificationContact *sender;
@property (copy) NSURL *contentURL;
@property (copy) NSString *imageName;
@property (getter=isSystemImage) char systemImage;
@property char mentionsCurrentUser;
@property char notifyRecipientAnyway;
@property (getter=isReplyToCurrentUser) char replyToCurrentUser;
@property unsigned long long recipientCount;
@property long long capabilities;
@property (getter=isBusinessCorrespondence) char businessCorrespondence;

+ (id)mutableContextFromINIntent:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (void)setBundleIdentifier:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setImageName:(id)a0;
- (void)setRecipients:(id)a0;
- (void)setContentURL:(id)a0;
- (void)setRecipientCount:(unsigned long long)a0;
- (void)setSender:(id)a0;
- (void)setCapabilities:(long long)a0;
- (void)setSystemImage:(char)a0;
- (void)setAssociatedObjectUri:(id)a0;
- (void)setBusinessCorrespondence:(char)a0;
- (void)setMentionsCurrentUser:(char)a0;
- (void)setNotifyRecipientAnyway:(char)a0;
- (void)setReplyToCurrentUser:(char)a0;

@end
