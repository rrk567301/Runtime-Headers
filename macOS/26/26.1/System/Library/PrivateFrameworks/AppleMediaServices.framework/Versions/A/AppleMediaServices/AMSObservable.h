@class NSString, NSConditionLock, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AMSObservable : NSObject

@property (readonly) unsigned long long behavior;
@property (retain) NSError *failureError;
@property (retain) NSString *logKey;
@property (retain) NSMutableArray *observers;
@property (retain) NSMutableArray *queuedResults;
@property (retain) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (retain) NSConditionLock *stateLock;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isComplete) BOOL complete;

- (id)initWithObserver:(id)a0 behavior:(unsigned long long)a1;
- (id)initWithObservers:(id)a0 behavior:(unsigned long long)a1;
- (id)initWithObservers:(id)a0;
- (BOOL)sendFailure:(id)a0;
- (BOOL)sendCompletion;
- (id)initWithObserver:(id)a0;
- (id)subscribeWithResultBlock:(id /* block */)a0;
- (void)unsubscribeAll;
- (BOOL)sendResult:(id)a0;
- (BOOL)cancel;
- (void)unsubscribe:(id)a0;
- (id)initWithNotification:(id)a0 object:(id)a1;
- (BOOL)_isComplete;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
