@class VCPCNNModelEspresso;

@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)a0;

@end
