@protocol FCPaidAccessCheckerType;

@interface FCPurchaseAccessChecker : FCAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;

- (id)init;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)checkAccessToItem:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithPaidAccessChecker:(id)a0;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;

@end
