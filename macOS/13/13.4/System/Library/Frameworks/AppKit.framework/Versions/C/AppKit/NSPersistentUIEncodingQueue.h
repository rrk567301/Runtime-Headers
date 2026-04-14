@class NSOperationQueue;

@interface NSPersistentUIEncodingQueue : NSObject

@property (readonly) NSOperationQueue *operationQueue;

- (void)dealloc;
- (id)init;
- (void)finishEnqueuedImmediatelyWithCompletionHandler:(id /* block */)a0;
- (void)finishEnqueuedWithCompletionHandler:(id /* block */)a0;

@end
