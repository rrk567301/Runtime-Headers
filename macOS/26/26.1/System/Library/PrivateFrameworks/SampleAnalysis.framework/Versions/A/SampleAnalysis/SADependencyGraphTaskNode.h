@class SATask, SATaskState;

@interface SADependencyGraphTaskNode : NSObject

@property (readonly) SATask *task;
@property (readonly) SATaskState *taskState;

- (void).cxx_destruct;

@end
