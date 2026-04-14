@class NSString, NSArray, MSPGroupSessionStorage, MSPNavigationListener, MSPSharedTripRelay, NSDictionary, MSPSharedTripSenderStrategyController, NSObject, NSMutableSet, MSPSharedTripGroupSession, MSPSharedTripStorageController;
@protocol OS_os_transaction, MSPSenderETAControllerDelegate;

@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate> {
    NSObject<OS_os_transaction> *_transaction;
    MSPNavigationListener *_navigationListener;
    NSMutableSet *_destinations;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripGroupSession *_groupSession;
    MSPSharedTripSenderStrategyController *_senderStrategyController;
    MSPGroupSessionStorage *_sessionStorage;
    MSPSharedTripStorageController *_storageController;
}

@property (readonly, nonatomic) NSArray *activeHandles;
@property (readonly, nonatomic) NSDictionary *serviceNamesByActiveHandle;
@property (weak, nonatomic) NSObject<MSPSenderETAControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_restoreLastSession;
- (BOOL)startSharingWithGroup:(id)a0 error:(id *)a1;
- (void)_invalidateActiveHandles;
- (void)_invalidateSharedTripWithError:(id)a0;
- (void)navigationListenerWaypointsUpdated:(id)a0;
- (void)groupSessionEnded:(id)a0 withError:(id)a1;
- (void)navigationListenerTrafficUpdated:(id)a0;
- (void)groupSession:(id)a0 participantDidJoin:(id)a1;
- (BOOL)startSharingWith:(id)a0 capabilityType:(unsigned long long)a1 serviceName:(id)a2 error:(id *)a3;
- (void)_stopLiveForVirtualReceiver:(id)a0;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)a0;
- (BOOL)stopSharingWith:(id)a0 reason:(unsigned long long)a1 error:(id *)a2;
- (void)_startNavigationListener;
- (void)navigationListenerRouteUpdated:(id)a0;
- (void)_setState:(id)a0 forEvent:(unsigned long long)a1;
- (id)rulesForParticipant:(id)a0;
- (void)navigationListenerStopped:(id)a0;
- (void)_cleanObjects;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)stopSharingWithReason:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_validateNavigationState:(id *)a0;
- (id)initWithRelay:(id)a0;
- (void)groupSession:(id)a0 participantDidLeave:(id)a1;
- (void)_startingGroupSession;
- (void)navigationListenerArrived:(id)a0;
- (BOOL)stopSharingWithGroup:(id)a0 reason:(unsigned long long)a1 error:(id *)a2;
- (void)navigationListenerETAUpdated:(id)a0;
- (void)navigationListenerIsReady:(id)a0;
- (void)navigationListenerLocationUpdated:(id)a0;
- (void)navigationListenerResumed:(id)a0;
- (void)_startLiveForVirtualReceiver:(id)a0;
- (void)_stopNavigationListener;
- (void)touchedRules;
- (void)_updateStorage;

@end
