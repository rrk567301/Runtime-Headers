@class NSString, NSArray;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {
    NSArray *_models;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serialize;
- (id)predict:(id)a0;
- (unsigned long long)outputDimension;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithModels:(id)a0;
- (id)initWithWeightsArray:(id)a0 andIntercept:(char)a1;

@end
