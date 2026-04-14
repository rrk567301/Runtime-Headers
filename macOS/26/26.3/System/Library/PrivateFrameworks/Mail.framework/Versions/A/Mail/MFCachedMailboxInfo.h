@class MFMailbox;

@interface MFCachedMailboxInfo : NSObject

@property (nonatomic) long long mailboxID;
@property (nonatomic) int mailboxType;
@property (retain, nonatomic) MFMailbox *mailbox;

- (id)init;
- (void)dealloc;
- (void)updateWithMessage:(id)a0;

@end
