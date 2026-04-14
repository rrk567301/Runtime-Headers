@class HKObserverSet, HDDaemon, NSMutableDictionary;
@protocol HDProfileManagerObserver;

@interface HDProfileManager : NSObject {
    HDDaemon *_daemon;
    NSMutableDictionary *_profiles;
    HKObserverSet<HDProfileManagerObserver> *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _profilesLock;
}

- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (void)addProfile:(id)a0;
- (id)allProfileIdentifiers;
- (id)profileForIdentifier:(id)a0;
- (void)addProfileManagerObserver:(id)a0;
- (void)addProfileManagerObserver:(id)a0 queue:(id)a1;
- (id)createProfileForIdentifier:(id)a0 firstName:(id)a1 lastName:(id)a2 error:(id *)a3;
- (id)createProfileOfType:(long long)a0 displayName:(id)a1 error:(id *)a2;
- (BOOL)deleteProfile:(id)a0 error:(id *)a1;
- (void)dispatchProfileListDidChange;
- (void)invalidateAndWaitWithReason:(id)a0;
- (id)newProfileWithIdentifier:(id)a0 daemon:(id)a1 directoryPath:(id)a2;
- (id)profileAssociatedWithNRDeviceUUID:(id)a0;
- (id)profileIdentifierForUUID:(id)a0;
- (void)removeProfileManagerObserver:(id)a0;
- (void)unitTest_reloadSecondaryProfiles;

@end
