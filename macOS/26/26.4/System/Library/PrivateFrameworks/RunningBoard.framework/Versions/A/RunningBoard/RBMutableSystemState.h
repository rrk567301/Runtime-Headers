@interface RBMutableSystemState : RBSystemState

- (void)addTag:(id)a0;
- (void)upgradeCondition:(id)a0 toValue:(long long)a1;
- (void)prewarmIdentity:(id)a0 withInterval:(double)a1;
- (void)removeAllPreventIdleSleepIdentifiers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unionState:(id)a0;
- (void)setPreventLaunch:(BOOL)a0;
- (void)addPreventIdleSleepIdentifier:(id)a0;
- (void)setPreventIdleSleep:(BOOL)a0;
- (id)init;
- (void)addPreventLaunchPredicate:(id)a0;
- (void)removePreventIdleSleepIdentifier:(id)a0;
- (void)addAllowLaunchPredicate:(id)a0;

@end
