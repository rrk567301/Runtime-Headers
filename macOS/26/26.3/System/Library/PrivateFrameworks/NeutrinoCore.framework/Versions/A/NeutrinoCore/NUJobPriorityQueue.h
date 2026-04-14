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

- (void)_run;
- (id)popJob;
- (BOOL)start;
- (BOOL)removeJob:(id)a0;
- (BOOL)_runNextJob;
- (id)description;
- (BOOL)_removeJob:(id)a0;
- (id)init;
- (void)addJob:(id)a0;
- (void)_addJob:(id)a0;
- (void)_sortIfNeeded;
- (void)_sort;
- (id)_popJob;
- (void).cxx_destruct;
- (void)_startRunning;
- (id)initWithName:(id)a0 owner:(id)a1 qos:(unsigned int)a2;

@end
