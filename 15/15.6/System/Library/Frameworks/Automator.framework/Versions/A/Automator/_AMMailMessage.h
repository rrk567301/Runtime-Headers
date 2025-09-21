@class NSString, _AMMailMailbox, _AMMailRichText, NSDate;

@interface _AMMailMessage : SBObject

@property (readonly, copy) NSString *allHeaders;
@property int backgroundColor;
@property (copy) _AMMailMailbox *mailbox;
@property (readonly, copy) _AMMailRichText *content;
@property (readonly, copy) NSDate *dateReceived;
@property (readonly, copy) NSDate *dateSent;
@property char deletedStatus;
@property char flaggedStatus;
@property char junkMailStatus;
@property char readStatus;
@property (readonly, copy) NSString *messageId;
@property (readonly, copy) NSString *source;
@property (readonly, copy) NSString *replyTo;
@property (readonly) long long messageSize;
@property (readonly, copy) NSString *sender;
@property (readonly, copy) NSString *subject;
@property (readonly) char wasForwarded;
@property (readonly) char wasRedirected;
@property (readonly) char wasRepliedTo;

- (id)recipients;
- (void)delete;
- (void)bounce;
- (void)moveTo:(id)a0;
- (id)headers;
- (long long)id;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)toRecipients;
- (id)mailAttachments;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (id)forwardOpeningWindow:(char)a0;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (id)redirectOpeningWindow:(char)a0;
- (id)replyOpeningWindow:(char)a0 replyToAll:(char)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
