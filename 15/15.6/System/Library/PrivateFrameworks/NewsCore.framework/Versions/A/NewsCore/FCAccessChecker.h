@interface FCAccessChecker : NSObject

- (id)init;
- (char)canSynchronouslyCheckAccessToItem:(id)a0;
- (void)checkAccessToItem:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (char)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;

@end
