@class NSObject, SKStatusPublishingService, DNDSStateProvider, DNDSModeConfigurationManager;
@protocol OS_dispatch_queue;

@interface DNDSUserAvailabilityCoordinator : NSObject {
    BOOL _active;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_extensionLaunchQueue;
    DNDSModeConfigurationManager *_modeConfigurationManager;
    DNDSStateProvider *_stateProvider;
    SKStatusPublishingService *_statusService;
}

- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)_queue_updateAvailabilityKit:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2;
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)a0 applicationIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isLocalUserAvailableForAppId:(id)a0 modeIdentifier:(id)a1 withError:(out id *)a2;
- (void)_publishStatusKitAvailability:(BOOL)a0 activityIdentifier:(id)a1 local:(BOOL)a2 scheduled:(BOOL)a3 date:(id)a4 forced:(BOOL)a5 completion:(id /* block */)a6;
- (id)_userAvailabilityTCCApprovedBundleIds;
- (id)_entitlementRecordForApplicationRecord:(id)a0;
- (id)allowedModesForContactHandle:(id)a0 withError:(out id *)a1;
- (void)_publishStatusKitCurrentAvailabilityForced:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isTCCUserAvailabilityGrantedForMessages;
- (void)_publishStatusKitAvailability:(BOOL)a0 activityIdentifier:(id)a1 forced:(BOOL)a2 completion:(id /* block */)a3;
- (id)publishStatusKitAvailabilityForced:(BOOL)a0 error:(out id *)a1;
- (BOOL)isTCCUserAvailabilityGrantedForBundleId:(id)a0;
- (id)initWithConfigurationManger:(id)a0 stateProvider:(id)a1;
- (void)coordinateUserAvailability:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendStatusKitInvitationsForContacts:(id)a0;
- (BOOL)isLocalUserAvailableForApplicationIdentifier:(id)a0 withError:(out id *)a1;
- (BOOL)userAvailabilityInActiveModeForContactHandle:(id)a0 withError:(out id *)a1;
- (id)publishStatusKitAvailabilityReturningError:(out id *)a0;

@end
