@interface BMIndirectHeap : NSObject

@property unsigned long long *array;
@property unsigned long long count;
@property unsigned long long size;
@property (copy) id /* block */ isAscending;

+ (id)new;

- (void)add:(unsigned long long)a0;
- (unsigned long long)pop;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (unsigned long long)top;
- (id)initWithHeapSize:(unsigned long long)a0 isAscending:(id /* block */)a1;

@end
