@class BSMutableKeyedSettings, BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {
    BSMutableKeyedSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)removeAllObservers;
- (void)inspectDiff:(id)a0 withContext:(void *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)dealloc;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)observeOtherSetting:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)observeProperty:(SEL)a0 withBlock:(id /* block */)a1;
- (void)observeSetting:(id)a0 withBlock:(id /* block */)a1;

@end
