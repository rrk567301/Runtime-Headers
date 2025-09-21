@class NSError;

@interface ML3AsyncDatabaseOperation : ML3DatabaseOperation {
    char _finished;
    char _executing;
    char _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _startTime;
    char _success;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (void)finish;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isCancelled;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (char)success;
- (void)execute;
- (void)finishWithError:(id)a0;
- (void)_execute;
- (char)_verifyLibraryAndAttributesProperties:(id *)a0;
- (id)initWithLibrary:(id)a0 writer:(id)a1;

@end
