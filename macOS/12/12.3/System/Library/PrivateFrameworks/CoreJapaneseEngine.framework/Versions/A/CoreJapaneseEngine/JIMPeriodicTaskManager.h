@class NSLock, NSMutableDictionary;

@interface JIMPeriodicTaskManager : NSObject

@property (retain) NSMutableDictionary *tasks;
@property double lastResumeTime;
@property BOOL suspending;
@property (retain) NSLock *lock;

+ (BOOL)isSuspended;
+ (void)addOperation:(id)a0 name:(id)a1 interval:(double)a2 retryInterval:(double)a3 queue:(id)a4;
+ (void)suspendPeriodicTasks;
+ (void)resumePeriodicTasks;
+ (void)notFinishedLastOperation:(id)a0;
+ (id)_sharedPeriodicTaskManagerWithCreation:(BOOL)a0;

- (void).cxx_destruct;

@end
