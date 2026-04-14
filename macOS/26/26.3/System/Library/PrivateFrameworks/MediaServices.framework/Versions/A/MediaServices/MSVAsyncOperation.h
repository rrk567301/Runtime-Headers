@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)finishWithError:(id)a0;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;
- (void).cxx_destruct;
- (void)execute;

@end
