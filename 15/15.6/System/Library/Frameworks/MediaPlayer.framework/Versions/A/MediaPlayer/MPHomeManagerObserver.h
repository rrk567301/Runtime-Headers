@class HMUser, HMHome, NSString, HMAccessory, MPHomeUserMonitor, NSSet, NSMutableDictionary, NSObject, HMHomeManager;
@protocol OS_dispatch_queue, MPHomeManagerObserverDelegate;

@interface MPHomeManagerObserver : NSObject <HMHomeManagerDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMHomeManager *_homeManager;
    HMHome *_currentHome;
    HMUser *_currentUser;
    NSSet *_homeUsers;
    NSMutableDictionary *_userMonitorMap;
    char _soundCheckCachedValue;
    char _setupDidComplete;
    unsigned long long _homekitInitSignpostId;
}

@property (weak, nonatomic) id<MPHomeManagerObserverDelegate> delegate;
@property (readonly, nonatomic) MPHomeUserMonitor *monitorForCurrentUser;
@property (nonatomic, getter=isSoundCheckEnabled) char soundCheckEnabled;
@property (readonly, nonatomic) char hasCurrentUser;
@property (readonly, nonatomic) char hasCurrentHome;
@property (readonly, nonatomic) char hasCurrentAccessory;
@property (readonly, nonatomic) HMUser *currentUser;
@property (readonly, nonatomic) HMHome *currentHome;
@property (readonly, nonatomic) HMAccessory *currentAccessory;
@property (readonly, nonatomic) char setupDidComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (void)_update;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManagerDidUpdatePrimaryHome:(id)a0;
- (void)home:(id)a0 didAddUser:(id)a1;
- (void)home:(id)a0 didRemoveUser:(id)a1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (void)homeDidUpdateSoundCheck:(id)a0;
- (void)homeManager:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (void)homeManagerDidRemoveCurrentAccessory:(id)a0;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)_usersDidChange;
- (id)userMonitorWithHomeIdentifiers:(id)a0;
- (void)_currentHomeDidChange;
- (void)_currentUserDidChange;
- (void)_soundCheckDidChange;
- (void)_updateAsyncOnQueue;
- (void)_updateSoundCheck;
- (id)_userMonitorWithHomeIdentifiers:(id)a0;
- (id)homeAccesssoryWithRouteID:(id)a0;
- (id)userMonitorWithHomeIdentifier:(id)a0;

@end
