@class UBStuckServiceRecoveryResult, NSSet, NSDictionary, SADependencyGraphNode;

@interface UBServiceContext : NSObject

@property (readonly) SADependencyGraphNode *serviceNode;
@property (readonly) UBStuckServiceRecoveryResult *serviceResult;
@property (readonly) NSSet *deadlocks;
@property (readonly) NSDictionary *threadIDToDeadlockDict;
@property (readonly) NSSet *threadExhaustions;
@property (readonly) NSDictionary *threadIDToThreadExhaustionDict;
@property (readonly) unsigned long long options;

- (void).cxx_destruct;
- (id)initWithServiceNode:(id)a0 serviceResult:(id)a1 deadlocks:(id)a2 threadIDToDeadlockDict:(id)a3 threadExhaustions:(id)a4 threadIDToThreadExhaustionDict:(id)a5 options:(unsigned long long)a6;

@end
