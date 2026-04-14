@class VCPCNNData, VCPCNNModel;

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (void).cxx_destruct;
- (id)init;
- (int)computePoseScore:(float *)a0;
- (float *)getInputBuffer;

@end
