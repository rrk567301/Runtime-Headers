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

- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void)start;
- (BOOL)isAsynchronous;
- (id)error;
- (BOOL)success;
- (void).cxx_destruct;
- (void)execute;
- (void)_execute;
- (BOOL)_verifyLibraryAndAttributesProperties:(id *)a0;
- (id)initWithLibrary:(id)a0 writer:(id)a1;

@end
