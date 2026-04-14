@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (BOOL)isAsynchronous;
- (void)execute;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)finishWithError:(id)a0;
- (BOOL)isFinished;
- (void)finish;
- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
