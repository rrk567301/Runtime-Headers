@interface AXBaseSettings : AXBaseSettings_Legacy {
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ listenerMap;
    void /* unknown type, empty encoding */ listenerLock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectorToPrefGroups;
}

@property (nonatomic) BOOL forceNewSettingsUsage;

- (void)unregisterUpdateBlockForPreferenceKey:(id)a0 withListenerID:(id)a1;
- (BOOL)hasExistingValueForPreferenceWithSelector:(SEL)a0;
- (id)notificationNameForPreferenceKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (float)floatValueForPreferenceKey:(id)a0 defaultValue:(float)a1;
- (void)clearExistingValueForPreferenceWithSelector:(SEL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)unregisterUpdateBlockForRetrieveSelector:(SEL)a0 withListenerID:(id)a1;
- (double)doubleValueForPreferenceKey:(id)a0 defaultValue:(double)a1;
- (void)registerUpdateBlock:(id /* block */)a0 forPreferenceKey:(id)a1 withListener:(id)a2;
- (id)domainNameForPreferenceKey:(id)a0;
- (void)postNotificationForPreferenceKey:(id)a0;
- (long long)integerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (id)objectValueForPreferenceKey:(id)a0 ofClass:(Class)a1 defaultValue:(id)a2;
- (BOOL)boolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)valueForPreferenceKey:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;

@end
