@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property (getter=isBusinessChat) char businessChat;
@property char mentionsCurrentUser;
@property (getter=isReplyToCurrentUser) char replyToCurrentUser;
@property char notifyRecipientAnyway;
@property unsigned long long recipientCount;

+ (char)supportsSecureCoding;
+ (Class)_intentClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
