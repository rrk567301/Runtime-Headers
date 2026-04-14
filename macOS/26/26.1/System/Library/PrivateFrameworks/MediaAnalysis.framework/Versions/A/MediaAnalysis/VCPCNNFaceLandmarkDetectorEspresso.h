@class VCPCNNModelEspresso;

@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (int)computeLandmarks:(float *)a0;
- (float *)getInputBuffer;

@end
