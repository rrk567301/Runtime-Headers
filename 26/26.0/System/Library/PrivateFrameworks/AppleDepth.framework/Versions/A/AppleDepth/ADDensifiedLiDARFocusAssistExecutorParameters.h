@class ADDensifiedLiDARFocusAssistPipelineParameters;

@interface ADDensifiedLiDARFocusAssistExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADDensifiedLiDARFocusAssistPipelineParameters *pipelineParameters;
@property (nonatomic) BOOL autoSetColorROI;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPipelineParameters:(id)a0;

@end
