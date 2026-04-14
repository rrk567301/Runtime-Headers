@interface CRKConcreteOSTransactionPrimitives : NSObject <CRKOSTransactionPrimitives>

@property (readonly, nonatomic) long long transactionCount;

- (void)incrementCount;
- (id)transactionWithReverseDNSReason:(id)a0;
- (void)decrementCount;

@end
