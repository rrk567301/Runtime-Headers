@class VCPCNNData, VCPCNNModel;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {
    VCPCNNModel *_modelLandmarks;
    VCPCNNData *_faceInput;
}

- (void).cxx_destruct;
- (id)init;
- (int)computeLandmarks:(float *)a0;
- (float *)getInputBuffer;

@end
