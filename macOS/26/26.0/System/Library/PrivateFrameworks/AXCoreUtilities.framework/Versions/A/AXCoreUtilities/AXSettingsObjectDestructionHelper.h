@class NSMutableArray, AXBaseSettings_Legacy;

@interface AXSettingsObjectDestructionHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_preferenceKeys;
    AXBaseSettings_Legacy *_settings;
}

- (void)addPreferenceKey:(id)a0;
- (void)dealloc;
- (id)initWithListenerAddress:(void *)a0 forSettings:(id)a1;
- (void).cxx_destruct;

@end
