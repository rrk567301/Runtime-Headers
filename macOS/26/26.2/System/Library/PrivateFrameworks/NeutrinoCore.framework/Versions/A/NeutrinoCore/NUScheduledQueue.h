@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUScheduledQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_items;
}

@property double timerLeeway;
@property double timerCoalesce;

- (void)_timerFired;
- (void)_scheduleTimer:(unsigned long long)a0;
- (void)_stopTimer;
- (void)_dispatchItemsThrough:(unsigned long long)a0;
- (void)_startTimer;
- (void)dispatchAfter:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dispatchAt:(unsigned long long)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)init;
- (void)dealloc;

@end
