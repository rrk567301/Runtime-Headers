@class NSOperation;

@interface FPProgress : NSProgress {
    NSOperation *_operation;
}

- (void)cancel;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;

@end
