@class NSMutableArray, EDMailboxProvider, NSMutableSet;

@interface _EDMessageDuplicateInfo : NSObject

@property (retain, nonatomic) EDMailboxProvider *mailboxProvider;
@property (retain, nonatomic) NSMutableSet *mailboxes;
@property (retain, nonatomic) NSMutableArray *flags;
@property (retain, nonatomic) NSMutableArray *dates;
@property (retain, nonatomic) NSMutableArray *senderBuckets;

- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (id)initWithMailboxProvider:(id)a0;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;
- (id)combinedDate;
- (long long)combinedSenderBucket;

@end
