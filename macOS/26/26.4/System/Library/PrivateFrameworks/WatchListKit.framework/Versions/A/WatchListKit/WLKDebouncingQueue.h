@class NSOperationQueue;

@interface WLKDebouncingQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property unsigned int delay;

- (void).cxx_destruct;
- (void)addOperationWithBlock:(id /* block */)a0;
- (id)init;

@end
