@class SKStatusPublishingService, NSObject;
@protocol DNDSUserAvailabilityTCCProviding, DNDSStateProviding, OS_dispatch_queue, DNDSModeConfigurationProviding;

@interface DNDSUserAvailabilityCoordinator : NSObject {
    char _active;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_extensionLaunchQueue;
    id<DNDSModeConfigurationProviding> _configurationProvider;
    id<DNDSStateProviding> _stateProvider;
    id<DNDSUserAvailabilityTCCProviding> _tccProvider;
    SKStatusPublishingService *_statusService;
}

- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (id)_entitlementRecordForApplicationRecord:(id)a0;
- (char)_isLocalUserAvailableForAppId:(id)a0 modeIdentifier:(id)a1 withError:(out id *)a2;
- (char)_isLocalUserAvailableForMessagesWithModeIdentifier:(id)a0 withError:(out id *)a1;
- (char)_isTCCUserAvailabilityGrantedForMessages;
- (void)_publishStatusKitAvailability:(char)a0 activityIdentifier:(id)a1 local:(char)a2 scheduled:(char)a3 date:(id)a4 forced:(char)a5 completion:(id /* block */)a6;
- (void)_publishStatusKitCurrentAvailabilityForced:(char)a0 override:(long long)a1 completionHandler:(id /* block */)a2;
- (char)_queue_didAppAvailabilityChangeForApplicationIdentifier:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2;
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)a0 applicationIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)a0 availabilityOverride:(long long)a1 applicationIdentifiers:(id)a2 completionHandler:(id /* block */)a3;
- (void)_queue_updateAvailabilityKit:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)allowedModesForContactHandle:(id)a0 withError:(out id *)a1;
- (void)coordinateUserAvailability:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)coordinateUserAvailabilityUpdateForApplicationIdentifier:(id)a0 forced:(char)a1 completionHandler:(id /* block */)a2;
- (id)exceptionalModesForContactHandle:(id)a0 withError:(out id *)a1;
- (id)initWithConfigurationProvider:(id)a0 stateProvider:(id)a1;
- (id)initWithConfigurationProvider:(id)a0 stateProvider:(id)a1 userAvailabilityTCCProvider:(id)a2;
- (char)isLocalUserAvailableForApplicationIdentifier:(id)a0 withError:(out id *)a1;
- (char)isTCCUserAvailabilityGrantedForBundleId:(id)a0;
- (id)publishStatusKitAvailabilityReturningError:(out id *)a0;
- (void)resumeUpdatingInvitationsForContacts:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendStatusKitInvitationsForContacts:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendStatusKitInvitationsForContacts:(id)a0 forceAvailabilityPublish:(char)a1 completionHandler:(id /* block */)a2;
- (id)silencedModesForContactHandle:(id)a0 withError:(out id *)a1;
- (void)suspendWithOverrideSetting:(long long)a0 completionHandler:(id /* block */)a1;
- (char)userAvailabilityInActiveModeForContactHandle:(id)a0 withError:(out id *)a1;

@end
