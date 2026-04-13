@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>

- (id)setupXPCConnection;
- (BOOL)isConditionRateLimited:(id)a0 onOperation:(long long)a1;
- (void)initializeRateLimitingBuffer;
- (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)cleanupExpiredConditionsInBuffer;
- (BOOL)operationWithCondition:(id)a0 forType:(long long)a1;
- (id)capped:(id)a0 to:(unsigned long long)a1;

@end
