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
- (void)unlock;
- (void)startTasks;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)lock;
- (id)init;
- (id)delegate;
- (id)currentTask;
- (void).cxx_destruct;
- (void)stopCurrentTask;
- (void)_cancelOperations:(id)a0;
- (id)_shouldStartTaskNamed:(id)a0;
- (void)abortCurrentTask;
- (void)addAsynchronousTaskOnTarget:(id)a0 selector:(SEL)a1 object:(id)a2 taskIdentifier:(id)a3 cancelSelector:(SEL)a4;
- (int)currentTaskIndex;
- (float)currentTaskProgress;
- (void)finishOperationInQueue:(id)a0;
- (void)freezeTasks;
- (BOOL)isAsynchronousTaskWithIdentifierRunning:(id)a0;
- (void)lockDelegate;
- (id)objectForTask:(id)a0 forKey:(id)a1;
- (id)operationQueueWithIdentifier:(id)a0 createsIfNeeded:(BOOL)a1;
- (void)postNotificationNamed:(id)a0;
- (void)registerTaskName:(id)a0 withTaskDescriptor:(id)a1 taskOrder:(int)a2;
- (void)restartTasks;
- (BOOL)runAsynchronousTasksWithIdentifier:(id)a0 timeout:(double)a1;
- (void)setRetainedObject:(id)a0;
- (void)taskLoop;
- (void)unlockDelegate;
- (void)unregisterTaskAtIndex:(int)a0;

@end
