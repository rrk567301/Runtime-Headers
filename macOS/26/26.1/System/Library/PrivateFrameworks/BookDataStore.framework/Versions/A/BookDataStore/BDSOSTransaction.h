@class NSObject;
@protocol OS_os_transaction, BDSOSTransactionDelegate;

@interface BDSOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;
@property (weak, nonatomic) id<BDSOSTransactionDelegate> delegate;

- (void)endTransaction;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTransactionName:(const char *)a0;
- (void)transactionNeedsMoreTime;

@end
