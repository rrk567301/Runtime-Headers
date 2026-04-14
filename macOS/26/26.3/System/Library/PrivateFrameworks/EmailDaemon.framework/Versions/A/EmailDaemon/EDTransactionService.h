@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EDTransactionService : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)startTransaction;
- (void).cxx_destruct;
- (void)resetPendingTransactions;
- (BOOL)hasPendingTransactions;
- (void)endTransaction:(id)a0;
- (id)initWithServiceName:(id)a0;

@end
