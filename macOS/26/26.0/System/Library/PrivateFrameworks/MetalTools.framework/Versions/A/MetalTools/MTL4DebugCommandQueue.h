@interface MTL4DebugCommandQueue : MTL4ToolsCommandQueue

- (void)dealloc;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeResidencySet:(id)a0;
- (void)addResidencySet:(id)a0;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)signalDrawable:(id)a0;
- (void)commit:(const id *)a0 count:(unsigned long long)a1;
- (void)commit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2;
- (void)copyBufferMappingsFromBuffer:(id)a0 toBuffer:(id)a1 operations:(const struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; } *)a2 count:(unsigned long long)a3;
- (void)copyTextureMappingsFromTexture:(id)a0 toTexture:(id)a1 operations:(const struct { struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x0; unsigned long long x1; unsigned long long x2; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x3; unsigned long long x4; unsigned long long x5; } *)a2 count:(unsigned long long)a3;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)signalEvent:(id)a0 value:(unsigned long long)a1;
- (void)updateBufferMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; unsigned long long x2; } *)a2 count:(unsigned long long)a3;
- (void)updateTextureMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a2 count:(unsigned long long)a3;
- (void)validateBufferAccess:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 resourceSparsePageSize:(long long)a2 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a3;
- (void)validateBufferAccess:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 resourceSparsePageSize:(long long)a2 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a3;
- (void)validateCommitCommon:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a0 commandBuffers:(const id *)a1 count:(unsigned long long)a2;
- (void)validateHeapAccess:(id)a0 rangeOffset:(unsigned long long)a1 tileRegions:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 resourceSparsePageSize:(long long)a3 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a4;
- (void)validateTextureAccess:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 mipLevel:(unsigned long long)a2 slice:(unsigned long long)a3 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a4;
- (void)waitForDrawable:(id)a0;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned short)a2;

@end
