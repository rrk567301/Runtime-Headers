@class VCPCNNModelEspresso;

@interface VCPCNNFastGestureRecognition : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)detector;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (int)createInput:(float *)a0 keypoints:(id)a1;
- (int)gestureDetection:(id)a0 score:(float *)a1;
- (int)getDetectionScore:(float *)a0;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (int)planDestroy;

@end
