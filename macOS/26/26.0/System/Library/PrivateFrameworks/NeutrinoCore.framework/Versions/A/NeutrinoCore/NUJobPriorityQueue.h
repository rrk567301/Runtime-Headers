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
- (id)initWithName:(id)a0 owner:(id)a1 qos:(unsigned int)a2;
- (BOOL)_removeJob:(id)a0;
- (void)_sortIfNeeded;
- (void)_startRunning;
- (id)init;
- (BOOL)_runNextJob;
- (void)_sort;
- (void)_addJob:(id)a0;
- (id)description;
- (id)_popJob;
- (BOOL)removeJob:(id)a0;
- (void)addJob:(id)a0;
- (void).cxx_destruct;

@end
