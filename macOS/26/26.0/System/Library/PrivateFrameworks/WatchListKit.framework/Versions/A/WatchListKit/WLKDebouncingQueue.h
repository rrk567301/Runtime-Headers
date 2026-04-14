@class NSOperationQueue;

@interface WLKDebouncingQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property unsigned int delay;

- (id)init;
- (void)addOperationWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
