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
- (void)finishWithError:(id)a0;
- (void)execute;
- (void)finish;
- (id)error;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)success;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)start;
- (void)_execute;
- (BOOL)_verifyLibraryAndAttributesProperties:(id *)a0;
- (id)initWithLibrary:(id)a0 writer:(id)a1;

@end
