@class ABTask;

@interface ABTaskOperation : NSOperation {
    ABTask *_task;
}

@property (copy) id /* block */ taskCompletionBlock;

- (id)initWithTask:(id)a0;
- (void)main;
- (void)cancel;
- (void)dealloc;
- (void)callCompletionBlockWithCancelledError;

@end
