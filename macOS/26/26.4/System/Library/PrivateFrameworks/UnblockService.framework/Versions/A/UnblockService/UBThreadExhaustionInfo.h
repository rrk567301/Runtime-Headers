@class SATask, NSMutableSet;

@interface UBThreadExhaustionInfo : NSObject <NSCopying>

@property (readonly) SATask *task;
@property (readonly) double timeSpentBlocked;
@property (readonly) unsigned long long numThreadsInvolved;
@property (readonly) NSMutableSet *tasksBlocked;
@property unsigned long long numThreadsBlocked;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTask:(id)a0 timeSpentBlocked:(double)a1 numThreadsInvolved:(unsigned long long)a2;

@end
