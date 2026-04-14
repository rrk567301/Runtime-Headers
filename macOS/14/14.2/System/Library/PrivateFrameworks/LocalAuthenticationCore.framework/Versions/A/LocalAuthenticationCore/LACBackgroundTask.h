@class LACTimer;
@protocol LACBackgroundTaskDelegate;

@interface LACBackgroundTask : NSObject {
    id /* block */ _worker;
    id /* block */ _currentHandler;
    LACTimer *_watchdog;
    BOOL _isWorkerRunning;
}

@property (weak, nonatomic) id<LACBackgroundTaskDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithWorker:(id /* block */)a0;
- (void)_completeTaskWithResult:(id)a0;
- (void)_invalidateRequestWatchdog;
- (void)_setupRequestWatchdogWithTimeout:(double)a0 queue:(id)a1;
- (void)_startWorkerIfNeeded;
- (void)runWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)runWithTimeout:(double)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
