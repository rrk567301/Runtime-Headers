@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *transactions;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)dumpActiveTransactions;
- (void)configureTransactionIfNeeded:(id)a0 needed:(BOOL)a1;
- (void)invalidateAllTransactions;
- (BOOL)isTransactionActive:(id)a0;
- (void)performUnderTransaction:(id)a0 block:(id /* block */)a1;

@end
