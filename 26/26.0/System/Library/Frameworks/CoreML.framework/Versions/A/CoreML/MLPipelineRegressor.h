@class MLPipeline;

@interface MLPipelineRegressor : MLRegressor

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (unsigned long long)signpostID;
- (id)executionSchedule;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 description:(id)a1 configuration:(id)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
