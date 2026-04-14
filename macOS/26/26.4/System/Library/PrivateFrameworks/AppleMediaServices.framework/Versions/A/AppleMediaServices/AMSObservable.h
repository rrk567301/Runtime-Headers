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

- (void)unsubscribeAll;
- (id)initWithNotification:(id)a0 object:(id)a1;
- (id)initWithObservers:(id)a0 behavior:(unsigned long long)a1;
- (id)initWithObserver:(id)a0;
- (BOOL)_isComplete;
- (id)initWithObservers:(id)a0;
- (id)subscribeWithResultBlock:(id /* block */)a0;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;
- (id)initWithObserver:(id)a0 behavior:(unsigned long long)a1;
- (void)unsubscribe:(id)a0;
- (BOOL)sendFailure:(id)a0;
- (BOOL)sendResult:(id)a0;
- (void)subscribe:(id)a0;
- (BOOL)sendCompletion;
- (BOOL)cancel;
- (void).cxx_destruct;
- (id)init;

@end
