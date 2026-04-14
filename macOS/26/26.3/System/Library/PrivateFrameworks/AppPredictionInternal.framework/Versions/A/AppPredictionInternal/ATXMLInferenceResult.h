@class NSDictionary;

@interface ATXMLInferenceResult : NSObject

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *inputs;
@property (readonly, nonatomic) NSDictionary *intermediateValues;

- (void).cxx_destruct;
- (id)initWithScore:(double)a0 inputs:(id)a1 intermediateValues:(id)a2;

@end
