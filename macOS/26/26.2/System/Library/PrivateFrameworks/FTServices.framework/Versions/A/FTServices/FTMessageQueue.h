@class NSArray, IDSBaseMessage, CUTDeferredTaskQueue, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject {
    CUTDeferredTaskQueue *_timeoutTask;
}

@property (retain) NSMutableArray *_queue;
@property (retain) NSMutableArray *_addDates;
@property (retain) IDSBaseMessage *currentMessage;
@property (readonly) IDSBaseMessage *topMessage;
@property (readonly) long long count;
@property (readonly) NSArray *messages;
@property (weak) id<FTMessageQueueDelegate> delegate;

- (void)removeAllMessages;
- (id)dequeueTopMessage;
- (BOOL)removeMessage:(id)a0;
- (void)_clearTimeout;
- (id)messageForUniqueID:(unsigned long long)a0;
- (void)_setTimeout;
- (void).cxx_destruct;
- (BOOL)addMessageAtHeadOfQueue:(id)a0;
- (BOOL)addMessage:(id)a0;
- (id)init;
- (void)_timeoutHit;

@end
