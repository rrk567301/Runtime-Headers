@class BSMutableKeyedSettings, BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableKeyedSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (void)removeAllObservers;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)description;
- (id)succinctDescription;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;
- (void)observeSetting:(id)a0 withBlock:(id /* block */)a1;

@end
