@class VCPCNNModelEspresso;

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)computePoseScore:(float *)a0;
- (float *)getInputBuffer;

@end
