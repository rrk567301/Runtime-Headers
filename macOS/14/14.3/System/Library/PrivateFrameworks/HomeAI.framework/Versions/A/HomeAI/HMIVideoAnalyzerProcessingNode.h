@class HMIVideoAnalyzerDynamicConfiguration, HMIVideoAnalyzerConfiguration;

@interface HMIVideoAnalyzerProcessingNode : HMIVideoProcessingNode

@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (retain) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
