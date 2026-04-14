@class NSString;

@interface _FMPriorityQueueingStrategy : NSObject <FMQueueingStrategy> {
    id /* block */ _priorityComparator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueueObject:(id)a0 buffer:(id)a1;
- (id)initWithComparator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_insertionIndexForObject:(id)a0 buffer:(id)a1;

@end
