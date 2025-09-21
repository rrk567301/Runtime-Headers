@class NSSet, NSMutableSet, SADependencyGraphNode;

@interface UBDeadlockInfo : NSObject

@property (readonly) SADependencyGraphNode *node;
@property (readonly) double timeSpentDeadlocked;
@property (readonly) NSSet *tasksInvolved;
@property unsigned long long numThreadsInvolved;
@property (readonly) NSMutableSet *tasksBlocked;
@property unsigned long long numThreadsBlocked;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0 timeSpentDeadlocked:(double)a1 tasksInvolved:(id)a2 numThreadsInvolved:(unsigned long long)a3;

@end
