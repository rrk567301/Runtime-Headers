@class ABTask;

@interface ABTaskOperation : NSOperation {
    ABTask *_task;
}

@property (copy) id /* block */ taskCompletionBlock;

- (id)initWithTask:(id)a0;
- (void)main;
- (void)dealloc;
- (void)cancel;
- (void)callCompletionBlockWithCancelledError;

@end
