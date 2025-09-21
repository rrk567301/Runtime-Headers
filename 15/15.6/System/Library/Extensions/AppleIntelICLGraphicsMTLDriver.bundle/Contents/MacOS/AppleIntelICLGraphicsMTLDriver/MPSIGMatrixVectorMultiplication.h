@class NSString;
@protocol MTLDevice;

@interface MPSIGMatrixVectorMultiplication : MPSExternalPluginBase <MPSExternalMatrixVectorMultiplication> {
    id<MTLDevice> igDevice;
    char _transpose;
    char _enableGEMMBlockIO;
    char _enableGEMMVUseAccumF16;
    unsigned long long _rows;
    unsigned long long _columns;
    double _alpha;
    double _beta;
    struct IGMPSGemmvKernelInfo { float alpha; float beta; unsigned int M; unsigned int K; unsigned int N; unsigned int lda; } _coeff;
    struct kernelExecInfoStruct { unsigned int funcType; struct CHAL_DECODED_BINARY_INFO *pKernelInfo; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerGroup; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; } GEMMkernelExecInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 matrix:(id)a4 matrixStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a5 vector:(id)a6 vectorStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a7 result:(id)a8 resultStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a9 predicationBuffer:(id)a10 predicationOffset:(unsigned long long)a11;
- (id)initWithDevice:(id)a0 transpose:(char)a1 rows:(unsigned long long)a2 columns:(unsigned long long)a3 alpha:(double)a4 beta:(double)a5;
- (void)BindResourcesWithCoeff:(id)a0 matrix:(id)a1 matrixStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a2 vector:(id)a3 vectorStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a4 result:(id)a5 resultStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a6;
- (int)getFuncType:(unsigned int)a0 vectorType:(unsigned int)a1 outVectorType:(unsigned int)a2 allowReducedPrecision:(char)a3 lda:(unsigned long long)a4;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 matrix:(id)a4 matrixStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a5 vector:(id)a6 vectorStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a7 result:(id)a8 resultStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a9;
- (unsigned long long)encodeToCommandBuffer_Intel:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 matrix:(id)a4 matrixStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a5 vector:(id)a6 vectorStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a7 result:(id)a8 resultStructure:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a9 predicationBuffer:(id)a10 predicationOffset:(unsigned long long)a11;
- (char)setInitParams;

@end
