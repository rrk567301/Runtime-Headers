@class BSMutableKeyedSettings, BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableKeyedSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeAllObservers;
- (id)init;
- (id)succinctDescription;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;
- (void)observeSetting:(id)a0 withBlock:(id /* block */)a1;

@end
