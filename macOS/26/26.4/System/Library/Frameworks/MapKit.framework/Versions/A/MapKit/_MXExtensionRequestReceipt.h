@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject {
    NSTimer *_timer;
    id /* block */ _completion;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)cancelWithTimeInterval:(double)a0;

@end
