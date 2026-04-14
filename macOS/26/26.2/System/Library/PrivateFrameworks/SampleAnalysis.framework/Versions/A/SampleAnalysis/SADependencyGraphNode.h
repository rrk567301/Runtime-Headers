@class SAThread, SATask, SAThreadState, SATaskState, SADependencyGraphTaskNode;

@interface SADependencyGraphNode : NSObject {
    BOOL _isPartOfADeadlock;
    BOOL _isBlockedByADeadlock;
    BOOL _analyzedDependenciesAlready;
    SADependencyGraphNode *_dependency;
    SADependencyGraphTaskNode *_taskDependency;
}

@property (readonly) SATask *task;
@property (readonly) SATaskState *taskState;
@property (readonly) SAThread *thread;
@property (readonly) SAThreadState *threadState;
@property (readonly, weak) SADependencyGraphNode *dependency;
@property (readonly) SADependencyGraphTaskNode *taskDependency;
@property (readonly) BOOL isPartOfADeadlock;
@property (readonly) BOOL isBlockedByADeadlock;

+ (id)dependencyGraphForThreadsInSampleStore:(id)a0 atTimestamp:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;

@end
