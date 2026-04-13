@class NSString, NSMutableArray;

@interface SORequestQueue : NSObject {
    NSString *_identifier;
    NSMutableArray *_queue;
    id _processingItem;
}

@property (copy, nonatomic) id /* block */ processItemBlock;

+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:(id)a0;
+ (void)removeQueueWithIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)_processItem:(id)a0;
- (void)_itemCompleted;
- (void)enqueueRequest:(id)a0;
- (void)processNextRequest;
- (void)removeAllRequestsWithBlock:(id /* block */)a0;
- (unsigned long long)queueCount;

@end
