@class MLPipeline;

@interface MLPipelineRegressor : MLRegressor

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (void).cxx_destruct;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (void)enableInstrumentsTracing;
- (id)initWithEngine:(id)a0 description:(id)a1 configuration:(id)a2 error:(id *)a3;

@end
