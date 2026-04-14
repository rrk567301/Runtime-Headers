@class NSObject;
@protocol OS_os_transaction;

@interface CRKOSTransactionToken : NSObject <CRKCancelable>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_os_transaction> *underlyingTransaction;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReason:(id)a0 completionHandler:(id /* block */)a1;

@end
