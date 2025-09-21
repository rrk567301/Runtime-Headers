@class NSMutableData, NSMutableArray;

@interface PPNeuralNetworkBuilder : NSObject {
    unsigned long long _prevSize;
    unsigned long long _nlayers;
    NSMutableData *_descriptors;
    NSMutableArray *_weightsAndBiases;
    char _haveOutputLayer;
    char _done;
}

- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (void)addHiddenLayer:(unsigned long long)a0 weights:(const float *)a1 bias:(const float *)a2 activation:(unsigned char)a3 skip:(char)a4;
- (void)addOutputLayer:(unsigned long long)a0 weights:(const float *)a1 bias:(const float *)a2 activation:(unsigned char)a3 softmax:(char)a4;
- (id)initWithInputSize:(unsigned long long)a0;

@end
