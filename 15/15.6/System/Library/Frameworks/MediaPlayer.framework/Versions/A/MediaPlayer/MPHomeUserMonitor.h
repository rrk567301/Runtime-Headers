@class HMUser, NSString, HMSettings, HMHomeManager, NSObject;
@protocol OS_dispatch_queue;

@interface MPHomeUserMonitor : NSObject <HMSettingsDelegate, HMUserDelegatePrivate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMUser *_user;
    HMSettings *_privateHomeSettings;
    HMSettings *_sharedSettings;
    HMHomeManager *_homeManager;
    char _allowExplicitCachedValue;
    char _currentAccessoryPrivateListeningCachedValue;
}

@property (class, readonly, nonatomic) MPHomeUserMonitor *monitorForCurrentUser;
@property (class, nonatomic, getter=isExplicitSettingEnabledForCurrentUser) char explicitSettingEnabledForCurrentUser;
@property (class, nonatomic, getter=isPrivateListeningEnabledForCurrentUserAndAccessory) char privateListeningEnabledForCurrentUserAndAccessory;

@property (nonatomic, getter=isExplicitSettingEnabled) char explicitSettingEnabled;
@property (nonatomic, getter=isPrivateListeningEnabledForCurrentAccessory) char privateListeningEnabledForCurrentAccessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userMonitorWithHomeIdentifiers:(id)a0;
+ (id)userMonitorWithHomeIdentifier:(id)a0;
+ (id)userMonitorWithUserIdentity:(id)a0 fromUserIdentityStore:(id)a1;

- (void).cxx_destruct;
- (void)_update;
- (void)user:(id)a0 didUpdateUserListeningHistoryUpdateControl:(id)a1 forHome:(id)a2;
- (id)_homeAccesssoryWithRouteID:(id)a0;
- (void)_loadAllowExplicitValue;
- (void)_loadCurrentAccessoryPrivateListening;
- (void)_notifyAllowExplicitUpdated;
- (void)_notifyPrivateListeningUpdated;
- (void)_postNotificationWithName:(id)a0;
- (void)_updateUserListeningHistoryControlForAccessory:(id)a0 enable:(char)a1;
- (char)hasAccessoryWithRouteID:(id)a0;
- (id)initWithUser:(id)a0 homeManager:(id)a1;
- (char)privateListeningEnabledForAccessoryWithRouteID:(id)a0;
- (id)privateListeningEnabledForGroupWithRouteIDs:(id)a0;
- (void)setPrivateListeningEnabledForAccessoryWithRouteID:(id)a0 enabled:(char)a1;
- (void)settingsDidUpdate:(id)a0;

@end
