@class NSError, NSOperationQueue;

@interface STMOperation : NSOperation {
    char _isExecuting;
    char _isFinished;
    double _startTime;
    double _finishTime;
}

@property (retain) NSError *error;
@property (weak) NSOperationQueue *operationQueue;
@property (readonly) double startTime;
@property (readonly) double finishTime;
@property (readonly) double duration;

+ (id)operation;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)finishWithError:(id)a0;
- (void)setIsFinished:(char)a0;
- (void)setIsExecuting:(char)a0;
- (void)willDequeueFromOperationQueue:(id)a0;
- (void)willEnqueueInOperationQueue:(id)a0;

@end
