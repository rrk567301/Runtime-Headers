@interface MTL4DebugCounterHeap : MTL4ToolsCounterHeap

- (id)initWithCounterHeap:(id)a0 device:(id)a1;
- (void)invalidateCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)resolveCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
