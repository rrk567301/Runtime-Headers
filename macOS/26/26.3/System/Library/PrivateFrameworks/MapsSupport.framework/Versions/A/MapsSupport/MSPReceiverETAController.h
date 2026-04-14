@class NSTimer, NSString, NSArray, MSPSharedTripRelay, NSMutableDictionary, MSPSharedTripBlocklist, NSObject, MDNotificationCenter, NSMutableOrderedSet;
@protocol OS_os_transaction, MSPReceiverETAControllerDelegate;

@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate> {
    NSObject<OS_os_transaction> *_transaction;
    NSMutableDictionary *_sharedSessions;
    NSMutableDictionary *_sharedNavStates;
    NSMutableDictionary *_waitingNavStates;
    NSMutableOrderedSet *_orderedNavStateIdentifiers;
    MDNotificationCenter *_mapsNotificationCenter;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripBlocklist *_blockedList;
    NSTimer *_cleanupTimer;
}

@property (readonly, nonatomic) NSArray *allTrips;
@property (weak, nonatomic) id<MSPReceiverETAControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)unsubscribeFromUpdatesToSharedTrip:(id)a0 error:(id *)a1;
- (void)_setNotificationCenter:(id)a0;
- (void)updateContacts;
- (void)groupSessionEnded:(id)a0;
- (void)_cleanupIfNecessary;
- (BOOL)subscribeToUpdatesToSharedTrip:(id)a0 error:(id *)a1;
- (BOOL)_cleanUpNecessaryForGroup:(id)a0;
- (void)groupSession:(id)a0 participantDidJoin:(id)a1;
- (void)relay:(id)a0 receiveData:(id)a1 info:(id)a2 fromID:(id)a3;
- (void)relay:(id)a0 sharingClosed:(id)a1;
- (void)clearBlockedTripIdentifiers;
- (void)_updateDelegateWithUpdateState:(id)a0 to:(id)a1 freshAvailable:(BOOL)a2;
- (void)_updateData:(id)a0 forGroup:(id)a1 fromID:(id)a2;
- (void)purgeExpiredBlockedTripIdentifiers;
- (void)blockSharedTrip:(id)a0;
- (void).cxx_destruct;
- (void)_cleanGroup:(id)a0;
- (void)storageController:(id)a0 updatedSharedTripGroupStorage:(id)a1;
- (BOOL)_allowMessageWithState:(id)a0 forGroup:(id)a1 fromID:(id)a2;
- (void)dealloc;
- (void)_showOrUpdateNotificationIfNeeded:(id)a0;
- (id)initWithRelay:(id)a0;
- (void)groupSession:(id)a0 participantDidLeave:(id)a1;
- (void)cleanTimer;
- (void)_resolveContactIfNeeded:(id)a0 fromId:(id)a1 completion:(id /* block */)a2;

@end
