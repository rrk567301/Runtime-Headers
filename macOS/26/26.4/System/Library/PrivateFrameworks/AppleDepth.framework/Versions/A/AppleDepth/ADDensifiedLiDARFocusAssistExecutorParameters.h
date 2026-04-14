@class ADDensifiedLiDARFocusAssistPipelineParameters;

@interface ADDensifiedLiDARFocusAssistExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADDensifiedLiDARFocusAssistPipelineParameters *pipelineParameters;
@property (nonatomic) BOOL autoSetColorROI;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPipelineParameters:(id)a0;

@end
