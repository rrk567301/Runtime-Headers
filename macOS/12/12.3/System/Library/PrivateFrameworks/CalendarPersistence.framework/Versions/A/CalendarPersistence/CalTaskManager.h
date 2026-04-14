@class NSMutableArray, NSMutableSet, NSRunLoop;
@protocol CalExecutableTask;

@interface CalTaskManager : NSObject {
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_queuedTasks;
    id<CalExecutableTask> _activeQueuedTask;
    id<CalExecutableTask> _modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    id<CalExecutableTask> _activeModalTask;
    int _state;
}

@property (retain) NSRunLoop *workRunLoop;
@property (retain) NSMutableSet *outstandingTaskGroups;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (id)stateString;
- (void)taskGroupDidFinish:(id)a0;
- (void)startTaskGroup:(id)a0;
- (void)_schedulePerformTask:(id)a0;
- (void)submitQueuedTask:(id)a0 toFrontOfQueue:(BOOL)a1;
- (id)allTasks;
- (void)_reactivateHeldTasks;
- (void)_scheduleStartModal:(id)a0;
- (void)_makeStateTransition;
- (void)_performTask:(id)a0;
- (void)_startModal:(id)a0;
- (void)submitIndependentTask:(id)a0;
- (void)submitQueuedTask:(id)a0;
- (void)taskDidFinish:(id)a0;
- (void)taskRequestModal:(id)a0;
- (void)taskEndModal:(id)a0;

@end
