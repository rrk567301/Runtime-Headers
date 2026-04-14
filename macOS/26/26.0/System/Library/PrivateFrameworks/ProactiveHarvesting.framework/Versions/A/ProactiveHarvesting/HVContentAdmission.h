@class _PASLock, NSUserDefaults, HVContentAdmissionKVOObserver;

@interface HVContentAdmission : NSObject {
    _PASLock *_lock;
    NSUserDefaults *_defaults;
    HVContentAdmissionKVOObserver *_kvoObserver;
    HVContentAdmissionKVOObserver *_pastEventsObserver;
}

+ (void)updateConfigurableBundleIdentifierDenyList:(id)a0;
+ (void)addContentAdmissionObserver:(id)a0;
+ (void)disableBundleIdentifier:(id)a0;
+ (void)migrateForTests;
+ (void)initialize;
+ (BOOL)suggestionsShouldShowPastEvents;
+ (void)registerConfigurationAsset:(id)a0;
+ (void)clearTestSettings;
+ (BOOL)shouldAdmitContentFromBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
