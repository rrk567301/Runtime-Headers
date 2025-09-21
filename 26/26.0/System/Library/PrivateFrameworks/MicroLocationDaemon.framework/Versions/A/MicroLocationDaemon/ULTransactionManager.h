@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *transactions;

+ (id)shared;

- (id)dumpActiveTransactions;
- (id)init;
- (void)beginTransaction:(id)a0;
- (void)endTransaction:(id)a0;
- (void).cxx_destruct;
- (void)invalidateAllTransactions;
- (void)performUnderTransaction:(id)a0 block:(id /* block */)a1;

@end
