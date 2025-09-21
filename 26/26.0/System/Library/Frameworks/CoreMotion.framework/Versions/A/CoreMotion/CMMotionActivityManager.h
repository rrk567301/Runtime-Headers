@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject {
    void *fLocationConnection;
    NSObject<OS_dispatch_queue> *fIncomingQueue;
    NSObject<OS_dispatch_queue> *fOutgoingQueue;
    id /* block */ fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (long long)authorizationStatus;
+ (BOOL)isActivityAvailable;
+ (void)paginateDatesIntoDatesFrom:(id)a0 datesTo:(id)a1 start:(id)a2 end:(id)a3 intervalLength:(double)a4;
+ (BOOL)isActivityLiteAvailable;

- (void)queryActivityStartingFromDate:(id)a0 toDate:(id)a1 toQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)dealloc;
- (void)stopActivityLiteUpdates;
- (id)filterActivities:(id)a0 withAttribute:(long long)a1;
- (void)stopPeriodicActivityUpdates;
- (void)queryActivityWithAttribute:(long long)a0 fromDate:(id)a1 toDate:(id)a2 toQueue:(id)a3 withHandler:(id /* block */)a4;
- (id)init;
- (void)startPeriodicActivityUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopActivityUpdates;
- (void)startActivityLiteUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)startActivityUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;

@end
