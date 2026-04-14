@class _PASLock, NSUserDefaults, HVContentAdmissionKVOObserver;

@interface HVContentAdmission : NSObject {
    _PASLock *_lock;
    NSUserDefaults *_defaults;
    HVContentAdmissionKVOObserver *_kvoObserver;
    HVContentAdmissionKVOObserver *_pastEventsObserver;
}

+ (void)registerConfigurationAsset:(id)a0;
+ (void)clearTestSettings;
+ (void)initialize;
+ (BOOL)shouldAdmitContentFromBundleIdentifier:(id)a0;
+ (void)disableBundleIdentifier:(id)a0;
+ (void)addContentAdmissionObserver:(id)a0;
+ (BOOL)suggestionsShouldShowPastEvents;
+ (void)updateConfigurableBundleIdentifierDenyList:(id)a0;
+ (void)migrateForTests;

- (void).cxx_destruct;
- (id)init;

@end
