@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) char _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) char _finished;

- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (char)isAsynchronous;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)execute;
- (void)finishWithError:(id)a0;

@end
