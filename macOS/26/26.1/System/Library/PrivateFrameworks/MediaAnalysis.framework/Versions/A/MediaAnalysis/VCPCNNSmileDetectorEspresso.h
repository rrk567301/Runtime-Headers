@class VCPCNNModelEspresso;

@interface VCPCNNSmileDetectorEspresso : VCPCNNSmileDetector {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (int)computeSmileScore:(float *)a0;
- (float *)getInputBuffer;

@end
