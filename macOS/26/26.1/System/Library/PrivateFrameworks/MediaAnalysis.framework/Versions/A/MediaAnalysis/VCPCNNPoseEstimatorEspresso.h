@class VCPCNNModelEspresso;

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (int)computePoseScore:(float *)a0;
- (float *)getInputBuffer;

@end
