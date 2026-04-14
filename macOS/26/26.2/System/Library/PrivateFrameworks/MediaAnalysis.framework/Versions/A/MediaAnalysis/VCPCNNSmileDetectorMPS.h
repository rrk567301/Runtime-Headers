@class VCPCNNData, VCPCNNModel;

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (void).cxx_destruct;
- (id)init;
- (int)computeSmileScore:(float *)a0;
- (float *)getInputBuffer;

@end
