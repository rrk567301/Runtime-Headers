@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (void)execute;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)init;

@end
