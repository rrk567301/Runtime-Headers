@interface PTInferenceANEConfig : NSObject

@property (readonly) int espressoPlanPriority;
@property (readonly) int espressoEngine;

- (unsigned long long)VNRequestModelExecutionPriority;
- (int)E5ExecutionPriority;
- (id)MLANEExecutionPriority;
- (id)initWithEspressoPlanPriority:(int)a0 espressoEngine:(int)a1;

@end
