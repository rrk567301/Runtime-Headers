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
- (void)_addJobs:(id)a0;
- (void)_removeJob:(id)a0;
- (void)_incrementGroupLevel;
- (id)init;
- (void)_finishedPriorityQueue:(id)a0;
- (void)_addJob:(id)a0;
- (id)description;
- (void)addJobs:(id)a0;
- (void)removeJob:(id)a0;
- (void)_decrementGroupLevel;
- (void)_startRunningIfNeeded;
- (void)finishedPriorityQueue:(id)a0;
- (void)addJob:(id)a0;
- (id)initWithStage:(long long)a0 name:(id)a1;
- (void).cxx_destruct;

@end
