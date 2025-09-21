@class NSMutableSet, NSMutableDictionary;

@interface HCSettings : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;

+ (id)additionalInfoForPrefenceUpdate;

- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)keysMonitoredForUpdates;
- (long long)integerValueForKey:(id)a0 withDefaultValue:(long long)a1;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (void)dealloc;
- (void)logMessage:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)_registerForNotification:(id)a0;
- (void)_handlePreferenceChanged:(id)a0;
- (id)init;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (id)objectValueForKey:(id)a0 withClass:(Class)a1 andDefaultValue:(id)a2;
- (void).cxx_destruct;
- (void)_synchronizeIfNecessary:(id)a0;
- (BOOL)_switchFromRootUserIfNecessary:(id /* block */)a0;
- (id)_valueForPreferenceKey:(id)a0;
- (BOOL)boolValueForPreferenceKey:(id)a0 withDefaultValue:(BOOL)a1;
- (double)cgfloatValueForPreferenceKey:(id)a0 withDefaultValue:(double)a1;
- (id)nanoPreferenceDomain;
- (id)notificationForPreferenceKey:(id)a0;
- (void)resetValueForSelector:(SEL)a0;
- (void)saveUpdateInfoIfNeededForPreferenceKey:(id)a0 toDomain:(struct __CFString { } *)a1;
- (BOOL)shouldSaveUpdateInfoForPreferenceKey:(id)a0;

@end
