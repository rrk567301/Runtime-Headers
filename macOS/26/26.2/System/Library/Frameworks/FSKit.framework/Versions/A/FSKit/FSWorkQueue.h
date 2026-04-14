@class NSString, NSMutableArray;

@interface FSWorkQueue : NSObject

@property (retain) NSMutableArray *queues;
@property int index;
@property int concurrency;
@property (retain) NSString *domain;
@property BOOL didInitQueues;

- (void)enqueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initQueueWithDomain:(id)a0 concurrency:(int)a1;
- (void)initQueues;

@end
