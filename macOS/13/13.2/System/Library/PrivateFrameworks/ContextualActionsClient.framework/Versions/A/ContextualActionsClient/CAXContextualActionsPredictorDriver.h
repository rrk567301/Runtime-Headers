@class NSDictionary, CAXContextualActionsPredictor;

@interface CAXContextualActionsPredictorDriver : NSObject

@property (retain, nonatomic) CAXContextualActionsPredictor *globalModel;
@property (retain, nonatomic) CAXContextualActionsPredictor *personalizedModel;
@property (retain, nonatomic) NSDictionary *configDict;

+ (id)encoderUrl;
+ (id)decoderUrl;
+ (id)personalizedModelInUseKey;

- (void).cxx_destruct;
- (id)initWithConfigUrl:(id)a0;
- (id)initWithConfigUrl:(id)a0 encoderUrl:(id)a1 decoderUrl:(id)a2 globalModelUrl:(id)a3 personalizedModelUrl:(id)a4;
- (id)predictWithConfidenceFromContext:(id)a0 numActions:(unsigned long long)a1;
- (id)decodeArrayOfCAElements:(id)a0 fromDecoderUrl:(id)a1;
- (id)decodeArrayOfCAElementsIntoActionIds:(id)a0 fromDecoderUrl:(id)a1;

@end
