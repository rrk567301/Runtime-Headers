@class NSMutableDictionary, MontrealNNModelNetwork;

@interface MontrealNNGenerateModel : NSObject

@property (readonly) unsigned long long weightFormat;
@property (readonly) MontrealNNModelNetwork *network;
@property struct MontrealNeuralNetwork { } *nnObject;
@property (readonly) NSMutableDictionary *inputs;
@property (readonly) NSMutableDictionary *outputs;

- (void)dealloc;
- (void).cxx_destruct;
- (void)merge:(id)a0;
- (void *)generateModelContainer;
- (id)initWithWeightFormat:(unsigned long long)a0;
- (id)modelContainerPath;
- (void)addInputs:(id)a0;
- (void)removeInput:(id)a0;
- (void)addOutputs:(id)a0;
- (void)removeOutput:(id)a0;
- (id)networkInputs;
- (id)networkOutputs;

@end
