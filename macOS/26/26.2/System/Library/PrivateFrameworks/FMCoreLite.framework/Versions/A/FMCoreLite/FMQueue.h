@class NSArray, NSMutableArray;
@protocol FMQueueingStrategy;

@interface FMQueue : NSObject {
    NSMutableArray *_buffer;
    id<FMQueueingStrategy> _strategy;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *allObjects;

+ (id)priorityQueueWithComparator:(id /* block */)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;

- (id)dequeue;
- (void)enqueue:(id)a0;
- (id)peek;
- (id)drain;
- (void)dequeueObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithStrategy:(id)a0;
- (id)init;

@end
