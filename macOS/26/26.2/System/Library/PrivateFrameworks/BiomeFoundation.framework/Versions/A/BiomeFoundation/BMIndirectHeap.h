@interface BMIndirectHeap : NSObject

@property unsigned long long *array;
@property unsigned long long count;
@property unsigned long long size;
@property (copy) id /* block */ isAscending;

+ (id)new;

- (unsigned long long)pop;
- (unsigned long long)top;
- (void)add:(unsigned long long)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithHeapSize:(unsigned long long)a0 isAscending:(id /* block */)a1;

@end
