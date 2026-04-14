@interface IMMutedChatList : NSObject

@property (class, readonly, nonatomic) IMMutedChatList *sharedList;

- (void)dealloc;
- (id)init;
- (void)_handleMutedChatListChanged;
- (void)_synchronizeMutedChatList:(id)a0 syncToPairedDevice:(BOOL)a1;
- (id)groupHashForParticipantIDs:(id)a0 lastAddressedHandleID:(id)a1;
- (BOOL)isMutedChatForChatIdentifier:(id)a0 chatStyle:(unsigned char)a1 groupID:(id)a2 participantIDs:(id)a3 lastAddressedHandleID:(id)a4 originalGroupID:(id)a5;
- (BOOL)isMutedChatForMuteIdentifiers:(id)a0;
- (void)muteChatWithMuteIdentifiers:(id)a0 untilDate:(id)a1 syncToPairedDevice:(BOOL)a2;
- (id)muteIdentifiersForChatStyle:(unsigned char)a0 groupID:(id)a1 participantIDs:(id)a2 lastAddressedHandleID:(id)a3 originalGroupID:(id)a4 chatIdentifier:(id)a5;
- (id)mutedChatListFromPreferences;
- (void)syncToPairedDeviceIncludingVersion:(BOOL)a0;
- (void)unmuteChatWithMuteIdentifiers:(id)a0 syncToPairedDevice:(BOOL)a1;
- (id)unmuteDateForMuteIdentifier:(id)a0;
- (id)unmuteDateForMuteIdentifiers:(id)a0;

@end
