@class NSArray;

@interface MTL4MachineLearningPipelineReflection : NSObject

@property (readonly) NSArray *bindings;

- (void)dealloc;
- (id)initWithExecutable:(id)a0 functionName:(id)a1 inputShapes:(id)a2 outputShapes:(id)a3;

@end
