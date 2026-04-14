@interface PTInferenceANEConfig : NSObject

@property (readonly) int espressoPlanPriority;
@property (readonly) int espressoEngine;

- (id)MLANEExecutionPriority;
- (int)E5ExecutionPriority;
- (unsigned long long)VNRequestModelExecutionPriority;
- (id)initWithEspressoPlanPriority:(int)a0 espressoEngine:(int)a1;

@end
