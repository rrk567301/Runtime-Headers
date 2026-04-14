@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property BOOL mentionsCurrentUser;
@property (getter=isReplyToCurrentUser) BOOL replyToCurrentUser;
@property BOOL notifyRecipientAnyway;
@property unsigned long long recipientCount;

+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
