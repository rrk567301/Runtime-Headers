@interface FCNewsVersionAccessChecker : FCAccessChecker

- (id)init;
- (char)canSynchronouslyCheckAccessToItem:(id)a0;
- (char)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;

@end
