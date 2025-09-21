@class VCPCNNModelEspresso;

@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector {
    float *_inputData;
    char _forceCPU;
    char _enableHandObject;
    VCPCNNModelEspresso *_modelEspresso;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)generateHandKeypoints:(struct CGPoint { double x0; double x1; } *)a0 keypointConfidence:(float *)a1 offset:(float)a2 handHoldsObjectConfidence:(float *)a3;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3 offset:(float *)a4;
- (id)init:(char)a0 sharedModel:(char)a1 modelName:(id)a2 enableHandObject:(char)a3 options:(id)a4;

@end
