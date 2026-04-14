@class NSOperation, NSObject;
@protocol CoalesceableBookmarksOperation, BookmarksOperationCoalescingTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface BookmarksOperationCoalescingTimer : NSObject {
    NSObject<OS_dispatch_source> *_coalescingDispatchSource;
}

@property (readonly, nonatomic) NSOperation<CoalesceableBookmarksOperation> *currentOperation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak) id<BookmarksOperationCoalescingTimerDelegate> delegate;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)coalesceCurrentOperationWithOperation:(id)a0;
- (id)initWithOperation:(id)a0 queue:(id)a1;

@end
