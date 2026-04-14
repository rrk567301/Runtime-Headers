@class NSObject;
@protocol OS_dispatch_semaphore;

@interface CCVegaTransactionMainThreadOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id /* block */ _block;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)runBlock;
- (void)provideBlock:(id /* block */)a0;
- (void)waitForBlockReady;

@end
