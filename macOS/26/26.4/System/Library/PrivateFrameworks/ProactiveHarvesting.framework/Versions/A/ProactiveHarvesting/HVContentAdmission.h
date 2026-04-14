@class _PASLock, NSUserDefaults, HVContentAdmissionKVOObserver;

@interface HVContentAdmission : NSObject {
    _PASLock *_lock;
    NSUserDefaults *_defaults;
    HVContentAdmissionKVOObserver *_kvoObserver;
    HVContentAdmissionKVOObserver *_pastEventsObserver;
}

+ (void)initialize;
+ (void)registerConfigurationAsset:(id)a0;
+ (BOOL)shouldAdmitContentFromBundleIdentifier:(id)a0;
+ (void)migrateForTests;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)suggestionsShouldShowPastEvents;
+ (void)addContentAdmissionObserver:(id)a0;
+ (void)clearTestSettings;
+ (void)updateConfigurableBundleIdentifierDenyList:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
