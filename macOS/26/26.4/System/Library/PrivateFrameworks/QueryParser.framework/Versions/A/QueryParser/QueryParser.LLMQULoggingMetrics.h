@class NSString;

@interface QueryParser.LLMQULoggingMetrics : NSObject {
    void /* function */ modelNumber;
}

@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic) unsigned int requestLength;
@property (nonatomic) unsigned int responseLength;
@property (nonatomic) unsigned int overallTime;
@property (nonatomic) unsigned int promptGenerationTime;
@property (nonatomic) unsigned int modelPrewarmTime;
@property (nonatomic) unsigned int modelInferenceTime;
@property (nonatomic) unsigned int postProcessTime;
@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
