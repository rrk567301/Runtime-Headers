@interface HMMXPCActivityInterface : HMFObject <HMMXPCActivityInterface>

- (void)registerXPCActivityWithActivityIdentifier:(id)a0 criteria:(id)a1 activityBlock:(id /* block */)a2;
- (void)unregisterXPCActivityWithActivityIdentifier:(id)a0;
- (id)criteriaForXPCActivity:(id)a0;
- (void)setCriteria:(id)a0 forXPCActivity:(id)a1;
- (BOOL)setState:(long long)a0 forXPCActivity:(id)a1;
- (long long)stateForXPCActivity:(id)a0;

@end
