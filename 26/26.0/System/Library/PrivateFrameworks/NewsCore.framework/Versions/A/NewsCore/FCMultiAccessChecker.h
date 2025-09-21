@class NSArray;

@interface FCMultiAccessChecker : FCAccessChecker

@property (readonly, copy, nonatomic) NSArray *accessCheckers;

- (void)checkAccessToItem:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (id)init;
- (id)initWithAccessCheckers:(id)a0;
- (void).cxx_destruct;

@end
