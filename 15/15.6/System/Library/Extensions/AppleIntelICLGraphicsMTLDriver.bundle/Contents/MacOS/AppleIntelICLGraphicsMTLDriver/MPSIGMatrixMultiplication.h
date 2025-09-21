@class NSString;
@protocol MTLTexture, MTLDevice;

@interface MPSIGMatrixMultiplication : MPSExternalPluginBase <MPSExternalMatrixMultiplication> {
    id<MTLDevice> igDevice;
    struct matrix_info { unsigned int dataType; char isTranspose; } AInfo;
    struct matrix_info { unsigned int dataType; char isTranspose; } BInfo;
    char _transposeLeft;
    char _transposeRight;
    char _enableGEMMBlockIO;
    char useComputeBlit;
    char _enableGEMMVUseAccumF16;
    int BlockIO;
    unsigned long long _M;
    unsigned long long _N;
    unsigned long long _K;
    unsigned long long _colsBNT;
    double _alpha;
    double _beta;
    struct IGMPSGemmvKernelInfo { float alpha; float beta; unsigned int M; unsigned int K; unsigned int N; unsigned int lda; } _coeff;
    id<MTLTexture> ATImage;
    id<MTLTexture> BTImage;
    id<MTLTexture> ALImage;
    id<MTLTexture> BLImage;
    struct kernelExecInfoStruct { unsigned int funcType; struct CHAL_DECODED_BINARY_INFO *pKernelInfo; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerGroup; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid; } GEMMkernelExecInfo;
    BOOL flag_isRNN;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0 transposeLeft:(char)a1 transposeRight:(char)a2 resultRows:(unsigned long long)a3 resultColumns:(unsigned long long)a4 interiorColumns:(unsigned long long)a5 alpha:(double)a6 beta:(double)a7;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 resultRows:(unsigned long long)a4 resultColumns:(unsigned long long)a5 interiorColumns:(unsigned long long)a6 alpha:(double)a7 beta:(double)a8 A:(id)a9 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a10 B:(id)a11 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a12 C:(id)a13 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a14 predicationBuffer:(id)a15 predicationOffset:(unsigned long long)a16;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 resultRows:(unsigned long long)a4 resultColumns:(unsigned long long)a5 interiorColumns:(unsigned long long)a6 alpha:(double)a7 beta:(double)a8 A:(id)a9 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a10 B:(id)a11 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a12 C:(id)a13 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a14 predicationBuffer:(id)a15 predicationOffset:(unsigned long long)a16 transA:(char)a17 transB:(char)a18;
- (void)BindResourcesBlockIO:(id *)a0 C:(id)a1 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a2;
- (void)BindResourcesWithCoeff:(id *)a0 A:(id)a1 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a2 B:(id)a3 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a4 C:(id)a5 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a6;
- (char)canSupport;
- (char)convertBufferTo2D:(id)a0 encoder:(id *)a1 A:(id)a2 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a3 B:(id)a4 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a5 C:(id)a6 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a7;
- (char)createBlockIOPrivateTexture:(unsigned int)a0 inputB:(unsigned int)a1;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 A:(id)a4 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a5 B:(id)a6 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a7 C:(id)a8 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a9;
- (unsigned long long)encodeToCommandBuffer:(id)a0 encoder:(id)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 resultRows:(unsigned long long)a4 resultColumns:(unsigned long long)a5 interiorColumns:(unsigned long long)a6 alpha:(double)a7 beta:(double)a8 A:(id)a9 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a10 B:(id)a11 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a12 C:(id)a13 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a14;
- (unsigned long long)encodeToCommandBuffer_Intel:(id)a0 encoder:(id *)a1 options:(unsigned long long)a2 batchSize:(unsigned long long)a3 resultRows:(unsigned long long)a4 resultColumns:(unsigned long long)a5 interiorColumns:(unsigned long long)a6 alpha:(double)a7 beta:(double)a8 A:(id)a9 aInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a10 B:(id)a11 bInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a12 C:(id)a13 cInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)a14 predicationBuffer:(id)a15 predicationOffset:(unsigned long long)a16 transA:(char)a17 transB:(char)a18;
- (int)getFuncType:(unsigned int)a0 inputB:(unsigned int)a1 output:(unsigned int)a2 allowReducedPrecision:(char)a3 matrixOffsetA:(unsigned long long)a4 matrixOffsetB:(unsigned long long)a5 bufferOffsetA:(unsigned long long)a6 bufferOffsetB:(unsigned long long)a7;
- (int)getFuncTypeTranspose:(unsigned int)a0 inputB:(unsigned int)a1 output:(unsigned int)a2 allowReducedPrecision:(char)a3 matrixOffsetA:(unsigned long long)a4 matrixOffsetB:(unsigned long long)a5 bufferOffsetA:(unsigned long long)a6 bufferOffsetB:(unsigned long long)a7;
- (char)isResetLaunchParameters:(int *)a0 dataTypeA:(unsigned int)a1 dataTypeB:(unsigned int)a2 dataTypeC:(unsigned int)a3 resultRows:(unsigned long long)a4 resultColumns:(unsigned long long)a5 interiorColumns:(unsigned long long)a6 alpha:(double)a7 beta:(double)a8 allowReducedPrecision:(char)a9 matrixOffsetA:(unsigned long long)a10 matrixOffsetB:(unsigned long long)a11 bufferOffsetA:(unsigned long long)a12 bufferOffsetB:(unsigned long long)a13 transA:(char)a14 transB:(char)a15;
- (void)setGemmLaunchParameters:(int)a0;
- (char)setInitParams;

@end
