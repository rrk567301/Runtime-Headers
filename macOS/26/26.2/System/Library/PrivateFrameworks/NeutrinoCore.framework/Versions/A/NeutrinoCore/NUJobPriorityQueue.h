@class NSString, NUJobQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject {
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_currentlyExecutingJobName;
    BOOL _isRunning;
}

@property (readonly) NSString *name;
@property (readonly) long long count;

- (BOOL)_removeJob:(id)a0;
- (void)_run;
- (BOOL)removeJob:(id)a0;
- (void)addJob:(id)a0;
- (void).cxx_destruct;
- (void)_sortIfNeeded;
- (BOOL)_runNextJob;
- (BOOL)start;
- (id)description;
- (id)_popJob;
- (void)_startRunning;
- (id)popJob;
- (void)_sort;
- (id)init;
- (void)_addJob:(id)a0;
- (id)initWithName:(id)a0 owner:(id)a1 qos:(unsigned int)a2;

@end
