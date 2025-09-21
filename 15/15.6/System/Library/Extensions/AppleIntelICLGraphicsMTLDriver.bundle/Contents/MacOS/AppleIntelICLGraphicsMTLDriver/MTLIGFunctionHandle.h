@interface MTLIGFunctionHandle : _MTLFunctionHandle

@property (readonly) unsigned long long heapOffset;

- (void)dealloc;
- (id)initWithFunction:(id)a0 kernelHeapOffset:(unsigned long long)a1;

@end
