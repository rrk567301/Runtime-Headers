@class EMMessageRepository, NSArray;

@interface MUICategoryMailboxCountHelper : NSObject

@property (retain, nonatomic) EMMessageRepository *messageRepository;
@property (retain, nonatomic) NSArray *mailboxes;

+ (id)log;

- (void).cxx_destruct;
- (id)messageCount;
- (void)_fetchCountForPrimaryOnly:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithMailboxes:(id)a0 messageRepository:(id)a1;

@end
