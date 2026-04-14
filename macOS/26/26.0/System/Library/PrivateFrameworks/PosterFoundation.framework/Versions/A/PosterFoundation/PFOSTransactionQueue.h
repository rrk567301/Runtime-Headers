@class NSString, NSOperationQueue;

@interface PFOSTransactionQueue : NSObject {
    NSOperationQueue *_txOperationQueue;
}

@property (readonly, copy, nonatomic) NSString *transactionName;

+ (id)sharedTransactionQueueForName:(id)a0;

- (void)dispatchAsync:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTransactionName:(id)a0;
- (void)dispatchSync:(id /* block */)a0;
- (void)_dispatchWork:(id /* block */)a0 waitUntilFinished:(BOOL)a1;

@end
