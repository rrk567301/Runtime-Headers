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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)start;
- (void)_run;
- (void)_sort;
- (BOOL)removeJob:(id)a0;
- (BOOL)_runNextJob;
- (id)initWithName:(id)a0 owner:(id)a1 qos:(unsigned int)a2;
- (void)addJob:(id)a0;
- (void)_addJob:(id)a0;
- (BOOL)_removeJob:(id)a0;
- (id)popJob;
- (id)_popJob;
- (void)_sortIfNeeded;
- (void)_startRunning;

@end
