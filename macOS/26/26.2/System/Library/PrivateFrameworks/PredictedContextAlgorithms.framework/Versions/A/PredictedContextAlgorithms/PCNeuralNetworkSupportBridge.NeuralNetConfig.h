@interface PCNeuralNetworkSupportBridge.NeuralNetConfig : NSObject {
    void /* unknown type, empty encoding */ batchSize;
    void /* unknown type, empty encoding */ outSteps;
    void /* unknown type, empty encoding */ hiddenLayerSize;
    void /* unknown type, empty encoding */ epochs;
    void /* unknown type, empty encoding */ trainOnGpu;
    void /* unknown type, empty encoding */ unknownLoiID;
}

- (id)init;
- (long long)getUnknownLoiIdLabel;
- (id)initWithHiddenLayers:(long long)a0 outSteps:(long long)a1 epochs:(long long)a2 batchSize:(long long)a3 trainOnGpu:(BOOL)a4;

@end
