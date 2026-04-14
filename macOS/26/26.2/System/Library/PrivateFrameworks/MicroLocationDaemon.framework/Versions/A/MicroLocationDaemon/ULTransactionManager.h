@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *transactions;

+ (id)shared;

- (void).cxx_destruct;
- (void)beginTransaction:(id)a0;
- (id)dumpActiveTransactions;
- (id)init;
- (void)endTransaction:(id)a0;
- (void)invalidateAllTransactions;
- (void)performUnderTransaction:(id)a0 block:(id /* block */)a1;

@end
