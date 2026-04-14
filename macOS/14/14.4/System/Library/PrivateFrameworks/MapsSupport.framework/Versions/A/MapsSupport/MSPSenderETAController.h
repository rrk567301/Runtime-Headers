@class NSString, NSArray, MSPSenderMinimalStrategy, MSPNavigationListener, MSPSharedTripRelay, MSPSenderLiveStrategy, MSPSenderMessageStrategy, NSMutableSet, NSObject, MSPSharedTripGroupSession, MSPGroupSessionStorage, MSPSharedTripStorageController;
@protocol OS_os_transaction, MSPSenderETAControllerDelegate;

@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate> {
    NSObject<OS_os_transaction> *_transaction;
    MSPNavigationListener *_navigationListener;
    NSMutableSet *_destinations;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripGroupSession *_groupSession;
    MSPSenderMinimalStrategy *_minimalSender;
    MSPSenderLiveStrategy *_liveSender;
    MSPSenderMessageStrategy *_messageSender;
    MSPGroupSessionStorage *_sessionStorage;
    MSPSharedTripStorageController *_storageController;
}

@property (readonly, nonatomic) NSArray *activeHandles;
@property (weak, nonatomic) NSObject<MSPSenderETAControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)startSharingWithMessages:(id)a0 error:(id *)a1;
- (void)_invalidateSharedTripWithError:(id)a0;
- (void)navigationListenerRouteUpdated:(id)a0;
- (void)_cleanObjects;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)a0;
- (void)_invalidateActiveHandles;
- (void)_restoreLastSession;
- (void)_sendClosedStateWithReason:(unsigned long long)a0 toIdentifiers:(id)a1;
- (void)_startNavigationListener;
- (void)_startingGroupSession;
- (void)_stopNavigationListener;
- (void)_updateStorage;
- (BOOL)_validateNavigationState:(id *)a0;
- (void)groupSession:(id)a0 participantDidJoin:(id)a1;
- (void)groupSession:(id)a0 participantDidLeave:(id)a1;
- (void)groupSessionEnded:(id)a0 withError:(id)a1;
- (id)initWithRelay:(id)a0;
- (void)navigationListenerArrived:(id)a0;
- (void)navigationListenerETAUpdated:(id)a0;
- (void)navigationListenerIsReady:(id)a0;
- (void)navigationListenerResumed:(id)a0;
- (void)navigationListenerStopped:(id)a0;
- (void)navigationListenerTrafficUpdated:(id)a0;
- (void)navigationListenerWaypointsUpdated:(id)a0;
- (id)rulesForParticipant:(id)a0;
- (BOOL)startSharingWith:(id)a0 error:(id *)a1;
- (BOOL)startSharingWithGroup:(id)a0 error:(id *)a1;
- (BOOL)stopSharingWith:(id)a0 reason:(unsigned long long)a1 error:(id *)a2;
- (BOOL)stopSharingWithGroup:(id)a0 reason:(unsigned long long)a1 error:(id *)a2;
- (BOOL)stopSharingWithReason:(unsigned long long)a0 error:(id *)a1;
- (void)touchedRules;

@end
