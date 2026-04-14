@class EMThread, NSMutableArray;

@interface _EDInMemoryThreadState : NSObject

@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) EMThread *thread;

- (void).cxx_destruct;
- (id)_combinedToList;
- (id)_displayMessage;
- (id)_combinedCCList;
- (void)_addMessages:(id)a0 withComparator:(id /* block */)a1;
- (void)_changeMessages:(id)a0;
- (id)_combinedFlagColors;
- (id)_combinedFlags;
- (BOOL)_combinedHasAttachments;
- (BOOL)_combinedHasUnflagged;
- (BOOL)_combinedIsBlocked;
- (BOOL)_combinedIsVIP;
- (id)_combinedMailboxes;
- (id)_combinedReadLater;
- (id)_combinedSenderListWithDisplayMessage:(id)a0;
- (id)_maxSearchRelevanceScore;
- (id)_newestDisplayDate;
- (id)_newestMessage;
- (id)_oldestMessage;
- (void)_removeMessages:(id)a0;
- (unsigned long long)_totalMessageSize;
- (id)_updateThreadWithObjectID:(id)a0 originatingQuery:(id)a1;
- (id)_updateThreadWithOriginatingQuery:(id)a0;
- (id)addMessages:(id)a0 withComparator:(id /* block */)a1 originatingQuery:(id)a2;
- (id)initWithMessages:(id)a0 objectID:(id)a1 originatingQuery:(id)a2;
- (id)removeMessages:(id)a0 andChangeMessages:(id)a1 originatingQuery:(id)a2 threadIsEmpty:(BOOL *)a3;
- (id)updateMessage:(id)a0 fromOldObjectID:(id)a1 withComparator:(id /* block */)a2 originatingQuery:(id)a3;

@end
