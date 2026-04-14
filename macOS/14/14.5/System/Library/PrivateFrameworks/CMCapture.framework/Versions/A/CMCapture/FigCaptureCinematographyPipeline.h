@class NSString, BWVideoDepthNode, BWRealtimeCinematographyNode;

@interface FigCaptureCinematographyPipeline : FigCapturePipeline {
    BWVideoDepthNode *_videoDepthNode;
    BWRealtimeCinematographyNode *_cinematographyNode;
    NSString *_sourceID;
}

+ (void)initialize;

- (void)dealloc;

@end
