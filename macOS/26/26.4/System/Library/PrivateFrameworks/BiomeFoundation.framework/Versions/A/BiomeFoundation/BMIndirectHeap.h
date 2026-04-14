@interface BMIndirectHeap : NSObject

@property unsigned long long *array;
@property unsigned long long count;
@property unsigned long long size;
@property (copy) id /* block */ isAscending;

+ (id)new;

- (unsigned long long)pop;
- (void)add:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (id)description;
- (unsigned long long)top;
- (void)dealloc;
- (id)initWithHeapSize:(unsigned long long)a0 isAscending:(id /* block */)a1;

@end
