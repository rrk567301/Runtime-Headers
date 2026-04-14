@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)execute;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
