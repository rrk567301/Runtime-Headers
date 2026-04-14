@class NSString;

@interface CCAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_personaIdentifier;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (void)complete;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)start;
- (id)initWithAsyncOperationBlock:(id /* block */)a0;
- (id)initWithPersonaIdentifier:(id)a0 asyncOperationBlock:(id /* block */)a1;

@end
