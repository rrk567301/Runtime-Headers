@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *transactions;

+ (id)shared;

- (void)beginTransaction:(id)a0;
- (id)dumpActiveTransactions;
- (void).cxx_destruct;
- (void)endTransaction:(id)a0;
- (id)init;
- (void)invalidateAllTransactions;
- (void)performUnderTransaction:(id)a0 block:(id /* block */)a1;

@end
