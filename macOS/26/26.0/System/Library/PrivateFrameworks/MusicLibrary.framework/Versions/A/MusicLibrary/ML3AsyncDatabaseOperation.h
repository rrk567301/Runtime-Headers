@class NSError;

@interface ML3AsyncDatabaseOperation : ML3DatabaseOperation {
    BOOL _finished;
    BOOL _executing;
    BOOL _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _startTime;
    BOOL _success;
    NSError *_error;
}

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)execute;
- (void)start;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)finish;
- (void)finishWithError:(id)a0;
- (id)error;
- (BOOL)success;
- (void).cxx_destruct;
- (void)_execute;
- (BOOL)_verifyLibraryAndAttributesProperties:(id *)a0;
- (id)initWithLibrary:(id)a0 writer:(id)a1;

@end
