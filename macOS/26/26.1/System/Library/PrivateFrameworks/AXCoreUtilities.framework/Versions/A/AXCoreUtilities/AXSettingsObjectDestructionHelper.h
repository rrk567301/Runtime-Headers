@class NSMutableArray, AXBaseSettings_Legacy;

@interface AXSettingsObjectDestructionHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_preferenceKeys;
    AXBaseSettings_Legacy *_settings;
}

- (id)initWithListenerAddress:(void *)a0 forSettings:(id)a1;
- (void)addPreferenceKey:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
