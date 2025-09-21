@class BWRealtimeCinematographyNode, BWSmartStyleLearningNode, NSString, BWFanOutNode, FigCaptureCinematographyPipelineConfiguration, BWVideoDepthNode;

@interface FigCaptureCinematographyPipeline : FigCapturePipeline {
    FigCaptureCinematographyPipelineConfiguration *_configuration;
    BWVideoDepthNode *_videoDepthNode;
    BWRealtimeCinematographyNode *_cinematographyNode;
    BWSmartStyleLearningNode *_smartStyleLearningNode;
    NSString *_sourceID;
    BWFanOutNode *_videoCaptureSplitterNode;
    unsigned int _videoCaptureOutputIndex;
    BWFanOutNode *_previewSplitterNode;
    unsigned int _previewOutputIndex;
}

+ (void)initialize;

- (void)dealloc;

@end
