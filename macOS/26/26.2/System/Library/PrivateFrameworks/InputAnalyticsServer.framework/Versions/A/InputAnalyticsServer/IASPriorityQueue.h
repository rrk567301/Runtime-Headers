@class NSMutableArray;

@interface IASPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableArray *storage;
@property (copy, nonatomic) id /* block */ comparator;
@property (readonly) unsigned long long count;

- (id)pop;
- (void)push:(id)a0;
- (id)peek;
- (id)initWithComparator:(id /* block */)a0;
- (void).cxx_destruct;
- (void)siftDownFromIndex:(unsigned long long)a0;
- (void)siftUpFromIndex:(unsigned long long)a0;

@end
