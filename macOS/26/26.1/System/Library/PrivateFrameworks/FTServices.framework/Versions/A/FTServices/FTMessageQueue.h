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

- (void)_timeoutHit;
- (void)_clearTimeout;
- (BOOL)addMessageAtHeadOfQueue:(id)a0;
- (void)removeAllMessages;
- (id)dequeueTopMessage;
- (void)_setTimeout;
- (BOOL)removeMessage:(id)a0;
- (void).cxx_destruct;
- (id)messageForUniqueID:(unsigned long long)a0;
- (BOOL)addMessage:(id)a0;
- (id)init;

@end
