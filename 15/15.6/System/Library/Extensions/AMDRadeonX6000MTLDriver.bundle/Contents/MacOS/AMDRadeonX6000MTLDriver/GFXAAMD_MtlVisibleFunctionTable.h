@interface GFXAAMD_MtlVisibleFunctionTable : MTLIOAccelVisibleFunctionTable {
    struct AMD_MtlFunctionTableRec { unsigned int numFunctions; unsigned long long rsrcIndex; unsigned char isRsrcIndexReserved : 1; unsigned int reserved : 31; } _amd;
}

@property (readonly) unsigned long long gpuAddress;

- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)a0;
- (unsigned long long)resourceIndex;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setFunction:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFunctions:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setValue:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setValue:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;

@end
