@interface RBMutableSystemState : RBSystemState

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addTag:(id)a0;
- (void)setPreventIdleSleep:(BOOL)a0;
- (void)addPreventIdleSleepIdentifier:(id)a0;
- (void)unionState:(id)a0;
- (void)removePreventIdleSleepIdentifier:(id)a0;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)setPreventLaunch:(BOOL)a0;
- (void)addPreventLaunchPredicate:(id)a0;

@end
