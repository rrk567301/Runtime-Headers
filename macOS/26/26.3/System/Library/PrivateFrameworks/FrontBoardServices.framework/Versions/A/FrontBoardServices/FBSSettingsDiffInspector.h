@class BSMutableKeyedSettings, BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableKeyedSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (id)succinctDescriptionBuilder;
- (void)removeAllObservers;
- (id)description;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;
- (void)observeSetting:(id)a0 withBlock:(id /* block */)a1;

@end
