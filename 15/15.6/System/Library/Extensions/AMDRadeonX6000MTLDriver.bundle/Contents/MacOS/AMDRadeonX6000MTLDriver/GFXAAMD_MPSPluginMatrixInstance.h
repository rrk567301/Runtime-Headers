@class NSString, GFXAAMD_MPSPlugin;
@protocol MTLDevice;

@interface GFXAAMD_MPSPluginMatrixInstance : MPSExternalPluginBase <MPSExternalMatrixMultiplication> {
    struct AMD_MPSPluginMatrixInstanceMembersRec { GFXAAMD_MPSPlugin *mpsPlugin; struct { char transposeLeft; char transposeRight; } MPSMatrixMulAttrs; id<MTLDevice> matrixDevice; struct vector<Tensile::KernelInvocation, std::allocator<Tensile::KernelInvocation>> { struct KernelInvocation *__begin_; struct KernelInvocation *__end_; struct __compressed_pair<Tensile::KernelInvocation *, std::allocator<Tensile::KernelInvocation>> { struct KernelInvocation *__value_; } __end_cap_; } kernelDispatcher; unsigned int pluginUsage; } m_members;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0;
- (id)device;
- (unsigned long long)maxBatchSize;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 resultRows:(unsigned long long)a4 resultColumns:(unsigned long long)a5 interiorColumns:(unsigned long long)a6 alpha:(double)a7 beta:(double)a8 A:(id)a9 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a10 B:(id)a11 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a12 C:(id)a13 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a14 predicationBuffer:(id)a15 predicationOffset:(unsigned long long)a16;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 resultRows:(unsigned long long)a4 resultColumns:(unsigned long long)a5 interiorColumns:(unsigned long long)a6 alpha:(double)a7 beta:(double)a8 A:(id)a9 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a10 B:(id)a11 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a12 C:(id)a13 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a14 predicationBuffer:(id)a15 predicationOffset:(unsigned long long)a16 transA:(char)a17 transB:(char)a18;
- (void)setMPSMatrixMulParametersWithTransposeLeft:(char)a0 transposeRight:(char)a1;
- (void)setMPSPlugin:(id)a0 usage:(unsigned int)a1;

@end
