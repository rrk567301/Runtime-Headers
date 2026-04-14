@interface _WBParticipantPresenceCoordinator : NSObject {
    void /* unknown type, empty encoding */ participantIdentifiersToCurrentIdentifiers;
    void /* unknown type, empty encoding */ tabGroupIdentifiersToParticipants;
    void /* unknown type, empty encoding */ tabIdentifiersToParticipants;
    void /* unknown type, empty encoding */ participantPresenceStore;
    void /* unknown type, empty encoding */ connectionManagerStore;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (id)activeParticipantsInTabGroupWithIdentifier:(id)a0;
- (id)activeParticipantsInTabWithIdentifier:(id)a0;
- (void)beginCollaborationForShare:(id)a0;
- (void)beginDeviceCoordination;
- (void)endCollaborationForShare:(id)a0;
- (void)endDeviceCoordination;
- (void)moveCurrentParticipantToTabIdentifier:(id)a0 inTabGroupIdentifier:(id)a1 withDeviceIdentifier:(id)a2;
- (id)tabGroupIdentifierForParticipantIdentifier:(id)a0;
- (id)tabIdentifierForParticipantIdentifier:(id)a0;
- (void)removeTabGroupWithIdentifier:(id)a0;
- (void)removeTabWithIdentifier:(id)a0;

@end
