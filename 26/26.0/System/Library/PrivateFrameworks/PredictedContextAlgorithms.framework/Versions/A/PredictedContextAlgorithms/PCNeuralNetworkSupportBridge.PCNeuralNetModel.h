@class NSArray;

@interface PCNeuralNetworkSupportBridge.PCNeuralNetModel : NSObject {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ encoderAsTransformer;
    void /* unknown type, empty encoding */ labelEncoderAsTransformer;
    void /* unknown type, empty encoding */ inputShape;
    void /* unknown type, empty encoding */ modelHasBeenTrained;
    void /* unknown type, empty encoding */ shouldInterruptTraining;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)interruptTraining;
- (id)getConfig;
- (id)getEncodedModel;
- (id)decodeLabelWithIndex:(long long)a0;
- (void)encodeWithLabelEncoderWithArray:(NSArray *)a0 completionHandler:(void (^)(NSArray *))a1;
- (void)fitLabelEncoderWithArray:(NSArray *)a0 completionHandler:(void (^)(NSArray *))a1;
- (id)initFrom:(id)a0;
- (id)predictFromTensorWithXPredict:(id)a0 xPredictMatrix:(id)a1 timesteps:(long long)a2;
- (long long)trainFromTensorsWithDatasetX:(id)a0 datasetY:(id)a1 timesteps:(long long)a2;

@end
