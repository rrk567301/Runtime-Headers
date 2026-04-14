@protocol MLModeling, MLProgramInternal;

@interface MLProgramEvaluator : NSObject

@property (retain, nonatomic) id<MLProgramInternal> program;
@property (readonly, copy) id<MLModeling> model;

- (void).cxx_destruct;
- (id)newContextAndReturnError:(id *)a0;
- (id)initWithProgram:(id)a0 error:(id *)a1;
- (void)updateContext:(id)a0 functionName:(id)a1 result:(id)a2;
- (id)prepareArgumentsFromFeatures:(id)a0 context:(id)a1 forFunctionName:(id)a2;
- (id)evaluateFunction:(id)a0 arguments:(id)a1 context:(id)a2 updateContext:(BOOL)a3 error:(id *)a4;
- (id)evaluateFunction:(id)a0 arguments:(id)a1 context:(id)a2 error:(id *)a3;

@end
