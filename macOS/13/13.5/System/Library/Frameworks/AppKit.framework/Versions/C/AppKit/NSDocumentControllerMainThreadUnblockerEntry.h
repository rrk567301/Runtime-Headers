@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NSDocumentControllerMainThreadUnblockerEntry : NSObject {
    id /* block */ unblocker;
    NSMutableArray *pendingInterrupters;
    NSMutableArray *pendingInterrupterCompletionBlocks;
    NSObject<OS_dispatch_queue> *queue;
    BOOL waitingForInterrupterCompletion;
}

@property BOOL suspended;

+ (id)entryWithUnblocker:(id /* block */)a0 queue:(id)a1;

- (void)dealloc;
- (void)_invokeInterrupter:(id /* block */)a0;
- (void)enqueueBlockingInterrupter:(id /* block */)a0;
- (void)transferBlockingInterruptersToUnblocker:(id)a0;
- (void)whenPendingInterruptersHaveCompletedInvokeBlock:(id /* block */)a0;

@end
