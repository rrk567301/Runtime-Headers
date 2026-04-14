@class _WBParticipantPresenceCoordinator;
@protocol WBParticipantPresenceCoordinatorDelegate;

@interface WBParticipantPresenceCoordinator : NSObject <_WBParticipantPresenceCoordinatorDelegate> {
    _WBParticipantPresenceCoordinator *_internalCoordinator;
}

@property (weak, nonatomic) id<WBParticipantPresenceCoordinatorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)activeParticipantsInTabGroupWithIdentifier:(id)a0;
- (id)activeParticipantsInTabWithIdentifier:(id)a0;
- (void)beginCollaborationForShare:(id)a0;
- (void)beginDeviceCoordination;
- (void)endCollaborationForShare:(id)a0;
- (void)endDeviceCoordination;
- (void)moveCurrentParticipantToTabIdentifier:(id)a0 inTabGroupIdentifier:(id)a1 withDeviceIdentifier:(id)a2;
- (void)participantPresenceCoordinator:(id)a0 didUpdateParticipantsInTabGroupWithIdentifier:(id)a1;
- (void)participantPresenceCoordinator:(id)a0 didUpdateParticipantsInTabWithIdentifier:(id)a1;
- (id)tabGroupIdentifierForParticipantIdentifier:(id)a0;
- (id)tabIdentifierForParticipantIdentifier:(id)a0;

@end
