@class NSMutableDictionary, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDFeatureSettingsManager : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_observersByFeatureIdentifier;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_settingsDidSyncNotification:(id)a0;
- (id)featureSettingsForFeatureIdentifier:(id)a0 error:(id *)a1;
- (void)registerObserver:(id)a0 featureIdentifier:(id)a1 queue:(id)a2;
- (char)removeFeatureSettingsValueForKey:(id)a0 featureIdentifier:(id)a1 error:(id *)a2;
- (char)resetFeatureSettingsForFeatureIdentifier:(id)a0 suppressNotificationsToObserver:(id)a1 error:(id *)a2;
- (char)setFeatureSettingsData:(id)a0 forKey:(id)a1 featureIdentifier:(id)a2 error:(id *)a3;
- (char)setFeatureSettingsNumber:(id)a0 forKey:(id)a1 featureIdentifier:(id)a2 suppressNotificationsToObserver:(id)a3 error:(id *)a4;
- (char)setFeatureSettingsString:(id)a0 forKey:(id)a1 featureIdentifier:(id)a2 error:(id *)a3;
- (char)setFeatureSettingsValues:(id)a0 featureIdentifier:(id)a1 suppressNotificationsToObserver:(id)a2 error:(id *)a3;
- (void)unregisterObserver:(id)a0 featureIdentifier:(id)a1;

@end
