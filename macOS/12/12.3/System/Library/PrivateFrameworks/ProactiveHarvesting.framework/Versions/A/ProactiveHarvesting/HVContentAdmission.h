@class _PASLock, NSUserDefaults, HVContentAdmissionKVOObserver;

@interface HVContentAdmission : NSObject {
    _PASLock *_lock;
    NSUserDefaults *_defaults;
    HVContentAdmissionKVOObserver *_kvoObserver;
    HVContentAdmissionKVOObserver *_pastEventsObserver;
}

+ (void)initialize;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isSupportedSearchableItemBundleIdentifier:(id)a0;
+ (BOOL)shouldAdmitContentFromBundleIdentifier:(id)a0;
+ (void)clearTestSettings;
+ (void)addContentAdmissionObserver:(id)a0;
+ (void)registerConfigurationAsset:(id)a0;
+ (void)updateConfigurableBundleIdentifierDenyList:(id)a0;
+ (BOOL)suggestionsShouldShowPastEvents;
+ (void)migrateForTests;

- (id)init;
- (void).cxx_destruct;

@end
