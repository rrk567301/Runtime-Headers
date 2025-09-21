@class VCPEspressoV2Data, VCPCNNModelEspressoV2;

@interface CNNMLScalerEspressoV2 : NSObject {
    VCPEspressoV2Data *_inputData;
    VCPCNNModelEspressoV2 *_modelEspressoV2;
    int _inputWidth;
    int _inputHeight;
}

@property (readonly) int outputHeight;
@property (readonly) int outputWidth;

- (void)dealloc;
- (void).cxx_destruct;
- (int)configInput:(int)a0;
- (int)copyOutput:(id)a0 pixelbuffer:(struct __CVBuffer { } *)a1;
- (int)inferenceWithPixelBuffer:(struct __CVBuffer { } *)a0 toDestinationPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithConfig:(id)a0 modelIndex:(long long)a1 inputSize:(struct CGSize { double x0; double x1; })a2 scalingFactor:(int)a3;
- (int)prepareInput:(struct __CVBuffer { } *)a0 withChannels:(int)a1;

@end
