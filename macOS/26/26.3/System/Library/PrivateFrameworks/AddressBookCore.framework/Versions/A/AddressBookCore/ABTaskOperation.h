@class ABTask;

@interface ABTaskOperation : NSOperation {
    ABTask *_task;
}

@property (copy) id /* block */ taskCompletionBlock;

- (void)cancel;
- (id)initWithTask:(id)a0;
- (void)main;
- (void)dealloc;
- (void)callCompletionBlockWithCancelledError;

@end
