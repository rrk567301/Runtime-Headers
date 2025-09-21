@class VCPImageMotionFlowAnalyzer;

@interface VCPMotionFlowRequest : VCPRequest {
    VCPImageMotionFlowAnalyzer *_motionFlowAnalyzer;
    char _useSingleEspressoModel;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer { } *)a0 andSecondImage:(struct __CVBuffer { } *)a1 withUpsample:(char)a2 withGuidedImage:(struct __CVBuffer { } *)a3 error:(id *)a4;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (unsigned int)preferredPixelFormat;
- (char)updateWithOptions:(id)a0 error:(id *)a1;
- (char)cleanupWithOptions:(id)a0 error:(id *)a1;
- (int)convertPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1 withPixelFormat:(int)a2;
- (int)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer { } *)a0 andSecondImage:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (id)initWithOptions:(id)a0 cancel:(id /* block */)a1;

@end
