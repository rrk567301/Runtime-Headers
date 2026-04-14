@class NSString, NUJobPriorityQueue, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NUJobPriorityQueue *_interactiveQueue;
    NUJobPriorityQueue *_initiatedQueue;
    long long _updateGroupLevel;
    NSString *_name;
}

@property (readonly) long long stage;

- (id)debugDescription;
- (void)_finishedPriorityQueue:(id)a0;
- (id)initWithStage:(long long)a0 name:(id)a1;
- (void)removeJob:(id)a0;
- (id)description;
- (void)_incrementGroupLevel;
- (void)_removeJob:(id)a0;
- (id)init;
- (void)_decrementGroupLevel;
- (void)addJob:(id)a0;
- (void)_addJob:(id)a0;
- (void)finishedPriorityQueue:(id)a0;
- (void).cxx_destruct;
- (void)_addJobs:(id)a0;
- (void)_startRunningIfNeeded;
- (void)addJobs:(id)a0;

@end
