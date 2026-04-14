@class NSMutableArray;

@interface HDPriorityQueue : NSObject {
    NSMutableArray *_heap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _comparisonBlock;
}

@property (readonly) unsigned long long count;
@property (readonly) BOOL isEmpty;

- (id)peek;
- (id)remove;
- (void).cxx_destruct;
- (void)insert:(id)a0;
- (id)initMinHeapWithComparisonBlock:(id /* block */)a0;
- (id)initWithComparisonBlock:(id /* block */)a0;

@end
