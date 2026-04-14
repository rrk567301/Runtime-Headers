@class NSObject;
@protocol OS_dispatch_queue;

@interface CSRequestQueue : NSObject {
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _suspended;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _workItemsLock;
    id /* block */ _startBlock;
    struct priority_queue<(anonymous namespace)::WorkItem, std::vector<(anonymous namespace)::WorkItem>, (anonymous namespace)::WorkItemComparator> { struct vector<(anonymous namespace)::WorkItem, std::allocator<(anonymous namespace)::WorkItem>> { struct WorkItem *__begin_; struct WorkItem *__end_; struct { struct WorkItem *__cap_; } ; } c; struct WorkItemComparator { } comp; } _workItems;
    BOOL _critical;
}

+ (id)_requestQueueAttribute:(BOOL)a0;

- (void)validate;
- (void)async:(id /* block */)a0;
- (void)resume;
- (void)enqueue:(id)a0;
- (id)initWithLabel:(char *)a0 target:(id)a1 critical:(BOOL)a2 startBlock:(id /* block */)a3;
- (void)suspend;
- (const char *)label;
- (void).cxx_destruct;
- (id)initWithLabel:(char *)a0 target:(id)a1 startBlock:(id /* block */)a2;
- (id).cxx_construct;
- (void)sync:(id /* block */)a0;
- (void)processWorkItemsUpToRequestID:(unsigned int)a0;

@end
