@interface BMIndirectHeap : NSObject

@property unsigned long long *array;
@property unsigned long long count;
@property unsigned long long size;
@property (copy) id /* block */ isAscending;

+ (id)new;

- (void)add:(unsigned long long)a0;
- (unsigned long long)top;
- (unsigned long long)pop;
- (id)description;
- (void)dealloc;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (id)initWithHeapSize:(unsigned long long)a0 isAscending:(id /* block */)a1;

@end
