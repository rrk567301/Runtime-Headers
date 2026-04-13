@class NSMutableArray, NSMutableDictionary;

@interface IKTaskManager : NSObject {
    NSMutableArray *_orderedTasks;
    NSMutableDictionary *_tasks;
    BOOL _taskListDidChange;
    BOOL _threadLaunched;
    BOOL _taskAborted;
    BOOL _needRestart;
    BOOL _delegateLocked;
    int _currentProcessedTaskIndex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskLoopMutex;
    BOOL _taskLoopLocked;
    id _delegate;
    id _retainedObject;
    NSMutableDictionary *_asyncQueues;
    int _asyncCount;
    NSMutableDictionary *_waitersPerQueue;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)lock;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)unlock;
- (id)currentTask;
- (void)restartTasks;
- (int)currentTaskIndex;
- (void)startTasks;
- (void)setRetainedObject:(id)a0;
- (void)stopCurrentTask;
- (void)postNotificationNamed:(id)a0;
- (void)lockDelegate;
- (void)unlockDelegate;
- (id)_shouldStartTaskNamed:(id)a0;
- (void)taskLoop;
- (void)abortCurrentTask;
- (id)operationQueueWithIdentifier:(id)a0 createsIfNeeded:(BOOL)a1;
- (void)_cancelOperations:(id)a0;
- (void)registerTaskName:(id)a0 withTaskDescriptor:(id)a1 taskOrder:(int)a2;
- (id)objectForTask:(id)a0 forKey:(id)a1;
- (void)freezeTasks;
- (float)currentTaskProgress;
- (void)unregisterTaskAtIndex:(int)a0;
- (BOOL)isAsynchronousTaskWithIdentifierRunning:(id)a0;
- (void)finishOperationInQueue:(id)a0;
- (BOOL)runAsynchronousTasksWithIdentifier:(id)a0 timeout:(double)a1;
- (void)addAsynchronousTaskOnTarget:(id)a0 selector:(SEL)a1 object:(id)a2 taskIdentifier:(id)a3 cancelSelector:(SEL)a4;

@end
