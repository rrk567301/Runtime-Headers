@class NSOperationQueue;

@interface NSPersistentUIEncodingQueue : NSObject

@property (readonly) NSOperationQueue *operationQueue;

- (void)dealloc;
- (id)init;
- (void)finishEnqueuedWithCompletionHandler:(id /* block */)a0;
- (void)finishEnqueuedImmediatelyWithCompletionHandler:(id /* block */)a0;

@end
