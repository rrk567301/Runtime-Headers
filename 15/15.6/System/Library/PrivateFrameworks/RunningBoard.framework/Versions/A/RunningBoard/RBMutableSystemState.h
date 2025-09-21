@interface RBMutableSystemState : RBSystemState

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addTag:(id)a0;
- (void)addAllowLaunchPredicate:(id)a0;
- (void)addPreventIdleSleepIdentifier:(id)a0;
- (void)addPreventLaunchPredicate:(id)a0;
- (void)prewarmIdentity:(id)a0 withInterval:(double)a1;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)removePreventIdleSleepIdentifier:(id)a0;
- (void)setPreventIdleSleep:(char)a0;
- (void)setPreventLaunch:(char)a0;
- (void)unionState:(id)a0;
- (void)upgradeCondition:(id)a0 toValue:(long long)a1;

@end
