@class NSObject, NSArray, NSString, NSMutableDictionary, AVPlaybackCoordinationMediumParticipant, NSMutableArray, NSCondition;
@protocol OS_dispatch_queue;

@interface AVPlaybackCoordinationMedium : NSObject <AVPlaybackCoordinationMediumDelegate> {
    NSMutableArray *_participants;
    NSMutableDictionary *_currentParticipantStates;
    NSMutableDictionary *_currentTransportControlStates;
    AVPlaybackCoordinationMediumParticipant *_initialStateOriginator;
    unsigned int _lowestInUseDefaultItemIdentifier;
    NSCondition *_condition;
    NSString *_itemIdentifierConditionWaitsOn;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly, nonatomic) NSArray *connectedPlaybackCoordinators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_removeUnusedTransportControlStates;
- (id)_initialStateOriginator;
- (unsigned int)_lowestInUseDefaultItemIdentifier;
- (id)_mediumParticipantForCoordinator:(id)a0 orIdentifier:(id)a1;
- (id)_participantStatesAsArray;
- (id)_participants;
- (void)_removeParticipant:(id)a0;
- (void)_removeParticipantStateForIdentifier:(id)a0;
- (void)_setInitialStateOriginator:(id)a0;
- (id)_transportControlStateForItemIdentifier:(id)a0;
- (id)_transportControlStatesAsArray;
- (void)_updateLowestInUseDefaultItemIdentifier;
- (void)_updateParticipantState:(id)a0 forIdentifier:(id)a1;
- (void)_updateParticipantsWithParticipant:(id)a0;
- (BOOL)_updateTransportControlState:(id)a0 forIdentifier:(id)a1;
- (unsigned char)areAllCoordinatorsSuspendedForReason:(id)a0;
- (int)connectPlaybackCoordinator:(id)a0;
- (int)disconnectPlaybackCoordinatorWithIdentifier:(id)a0;
- (void)endSuspensionOnAllCoordinatorsWithReason:(id)a0;
- (id)localParticipantUUIDForPlaybackCoordinator:(id)a0;
- (void)playbackCoordinator:(id)a0 broadcastLocalParticipantStateDictionary:(id)a1;
- (void)playbackCoordinator:(id)a0 broadcastTransportControlStateDictionary:(id)a1 forItemWithIdentifier:(id)a2;
- (void)playbackCoordinator:(id)a0 reloadTransportControlStateForItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
