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

- (void)addJob:(id)a0;
- (id)debugDescription;
- (void)removeJob:(id)a0;
- (void)_addJob:(id)a0;
- (void)_startRunningIfNeeded;
- (void)_removeJob:(id)a0;
- (void)_addJobs:(id)a0;
- (void).cxx_destruct;
- (void)finishedPriorityQueue:(id)a0;
- (void)_finishedPriorityQueue:(id)a0;
- (void)addJobs:(id)a0;
- (id)init;
- (void)_decrementGroupLevel;
- (id)description;
- (void)_incrementGroupLevel;
- (id)initWithStage:(long long)a0 name:(id)a1;

@end
