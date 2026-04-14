@class VCPVideoAnalysisPipelineFrameResource;

@interface MADNodeData : NSObject

@property (retain) VCPVideoAnalysisPipelineFrameResource *currentFrame;
@property struct opaqueCMSampleBuffer { } *nextSample;

- (void).cxx_destruct;
- (id)initWithCurrentFrameResource:(id)a0 nextSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;

@end
