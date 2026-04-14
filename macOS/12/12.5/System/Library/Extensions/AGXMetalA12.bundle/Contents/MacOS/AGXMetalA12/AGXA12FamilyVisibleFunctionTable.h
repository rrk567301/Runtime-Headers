@interface AGXA12FamilyVisibleFunctionTable : IOGPUMetalVisibleFunctionTable {
    struct VisibleFunctionTableNop { } _impl;
    int _type;
    id _pipelineState;
}

- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (unsigned long long)resourceIndex;
- (void)setFunction:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFunctions:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setValue:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setValue:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)clone:(id)a0 clonedResourceIndex:(unsigned long long)a1 clonedVisibleFunctionHeap:(struct DummyHeap { } *)a2 cloneHandleMap:(void *)a3;
- (id)initWithDevice:(id)a0 functionCount:(long long)a1 options:(unsigned long long)a2 isSuballocDisabled:(BOOL)a3 resourceIndex:(unsigned long long)a4 pipelineState:(id)a5 type:(int)a6;
- (id)initWithDevice:(id)a0 functionCount:(long long)a1 options:(unsigned long long)a2 isSuballocDisabled:(BOOL)a3 clonedResourceIndex:(unsigned long long)a4 clonedVisibleFunctionHeap:(struct DummyHeap { } *)a5 type:(int)a6;

@end
