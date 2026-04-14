@interface BMIndirectHeap : NSObject

@property unsigned long long *array;
@property unsigned long long count;
@property unsigned long long size;
@property (copy) id /* block */ isAscending;

+ (id)new;

- (void)add:(unsigned long long)a0;
- (void)reset;
- (void)dealloc;
- (id)init;
- (unsigned long long)pop;
- (unsigned long long)top;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHeapSize:(unsigned long long)a0 isAscending:(id /* block */)a1;

@end
