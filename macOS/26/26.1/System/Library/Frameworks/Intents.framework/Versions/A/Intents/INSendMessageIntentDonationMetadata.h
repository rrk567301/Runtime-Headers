@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property (getter=isBusinessChat) BOOL businessChat;
@property BOOL mentionsCurrentUser;
@property (getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property BOOL notifyRecipientAnyway;
@property unsigned long long recipientCount;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
