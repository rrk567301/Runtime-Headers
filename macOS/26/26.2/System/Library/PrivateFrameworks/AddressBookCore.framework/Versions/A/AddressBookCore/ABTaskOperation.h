@class ABTask;

@interface ABTaskOperation : NSOperation {
    ABTask *_task;
}

@property (copy) id /* block */ taskCompletionBlock;

- (void)cancel;
- (void)main;
- (id)initWithTask:(id)a0;
- (void)dealloc;
- (void)callCompletionBlockWithCancelledError;

@end
